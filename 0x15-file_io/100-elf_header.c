#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(__linux__)
#include <elf.h>
#elif defined(__APPLE__)
#include <mach-o/loader.h>
#else
#error "Unsupported platform"
#endif

void print_elf_header(const char* elfFile) {
    FILE* file = fopen(elfFile, "rb");
    if (file == NULL) {
        fprintf(stderr, "Error: Can't open file %s\n", elfFile);
        exit(98);
    }

    // Read ELF header into structure
    #if defined(__linux__)
    Elf64_Ehdr header;
    #elif defined(__APPLE__)
    struct mach_header_64 header;
    #endif

    if (fread(&header, sizeof(header), 1, file) != 1) {
        fprintf(stderr, "Error: Can't read ELF header from file %s\n", elfFile);
        fclose(file);
        exit(98);
    }

    // Check if it's a valid ELF file
    #if defined(__linux__)
    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: %s is not an ELF file\n", elfFile);
        fclose(file);
        exit(98);
    }
    #elif defined(__APPLE__)
    if (header.magic != MH_MAGIC_64) {
        fprintf(stderr, "Error: %s is not an ELF file\n", elfFile);
        fclose(file);
        exit(98);
    }
    #endif

    // Print the information contained in the ELF header
    printf("Magic: ");
    for (int i = 0; i < 4; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");

    printf("Class: %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);

    printf("Data: ");
    if (header.e_ident[EI_DATA] == ELFDATA2LSB) {
        printf("2's complement, little endian\n");
    } else if (header.e_ident[EI_DATA] == ELFDATA2MSB) {
        printf("2's complement, big endian\n");
    } else {
        printf("Unknown\n");
    }

    printf("Version: %d\n", header.e_ident[EI_VERSION]);

    printf("OS/ABI: ");
    switch (header.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        default:
            printf("Unknown\n");
    }

    printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);

    printf("Type: %d\n", header.e_type);

    printf("Entry point address: 0x%llx\n", (unsigned long long)header.e_entry);

    fclose(file);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    print_elf_header(argv[1]);

    return 0;
}

