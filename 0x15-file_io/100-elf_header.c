#include "main.h"
/**
 * is_elf - checks if a file is an ELF file.
 * @ptr: pointer to an array of the ELF magic numbers.
 * Return: nothing
 */
void is_elf(unsigned char *ptr)
{
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		if (ptr[i] != 127 &&
				ptr[i] != 'E' &&
				ptr[i] != 'L' &&
				ptr[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
 * print_elf_magic - function that rints the magic numbers of an ELF header.
 * @ptr: an array of the ELF magic numbers.
 * Return: nothing
 */
void print_elf_magic(unsigned char *ptr)
{
	int i = 0, len = EI_NIDENT;

	printf("  Magic:   ");
	for (i = 0; i < len; i++)
	{
		printf("%02x", ptr[i]);
		if (i == len - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * print_elf_class - Prints the class of an ELF header.
 * @ptr: pointer to an array of the ELF class.
 */
void print_elf_class(unsigned char *ptr)
{
	printf("  Class:                             ");
	switch (ptr[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", ptr[EI_CLASS]);
	}
}
/**
 * print_elf_data - Prints the data of an ELF header.
 * @ptr: pointer to an array of the ELF data.
 */
void print_elf_data(unsigned char *ptr)
{
	printf("  Data:                              ");

	switch (ptr[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ptr[EI_CLASS]);
	}
}
/**
 * print_elf_version - Prints the version of an ELF header.
 * @ptr: a pointer to an array of the ELF version.
 */
void print_elf_version(unsigned char *ptr)
{
	printf("  Version:                           %d", ptr[EI_VERSION]);
	switch (ptr[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * print_elf_osabi - Prints the OS/ABI of an ELF header.
 * @ptr: a pointer to an array of the ELF version.
 */
void print_elf_osabi(unsigned char *ptr)
{
	printf("  OS/ABI:                            ");
	switch (ptr[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ptr[EI_OSABI]);
	}
}
/**
 * print_elf_abi - Prints the ABI version of an ELF header.
 * @ptr: a pointer to an array of the ELF ABI version.
 */
void print_elf_abi(unsigned char *ptr)
{
	printf("  ABI Version:                       %d\n",
	       ptr[EI_ABIVERSION]);
}
/**
 * print_elf_type - Prints the type of an ELF header.
 * @type: The ELF type.
 * @ptr: A pointer to an array containing the ELF class.
 */
void print_elf_type(unsigned int type, unsigned char *ptr)
{
	if (ptr[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf("  Type:                              ");
	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type);
	}
}
/**
 * print_elf_entry - Prints the entry point of an ELF header.
 * @entry: The address of the ELF entry point.
 * @ptr: a pointer to an array of the ELF class.
 */
void print_elf_entry(unsigned long int entry, unsigned char *ptr)
{
	printf("  Entry point address:               ");
	if (ptr[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (ptr[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}
/**
 * close_fd - Closes an ELF file.
 * @fd: The file descriptor of the ELF file.
 * Description: If the file cannot be closed - exit code 98.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(98);
	}
}
/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *h;
	int fd, read_bytes;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		close_fd(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_bytes = read(fd, h, sizeof(Elf64_Ehdr));
	if (read_bytes == -1)
	{
		free(h);
		close_fd(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	is_elf(h->e_ident);
	printf("ELF Header:\n");
	print_elf_magic(h->e_ident);
	print_elf_class(h->e_ident);
	print_elf_data(h->e_ident);
	print_elf_version(h->e_ident);
	print_elf_osabi(h->e_ident);
	print_elf_abi(h->e_ident);
	print_elf_type(h->e_type, h->e_ident);
	print_elf_entry(h->e_entry, h->e_ident);
	free(h);
	close_fd(fd);
	return (0);
}
