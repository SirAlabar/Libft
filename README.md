<div align="center">

# 📚 Libft

### My own C library with essential functions

</div>

## 📝 About the Project

This is the first project in the 42 curriculum. The objective is to recreate various functions from the standard C library (libc) and additional functions that will be useful throughout the course.

## 🎯 Final Grade
<div align="center">

![Grade](https://img.shields.io/badge/Grade-125%2F100-brightgreen)

</div>

## 🛠️ Implemented Functions

### Libc Functions
| Function | Description |
|--------|-----------|
| isalpha | Checks if character is alphabetic |
| isdigit | Checks if character is a digit |
| isalnum | Checks if character is alphanumeric |
| isascii | Checks if character is in ASCII table |
| isprint | Checks if character is printable |
| strlen | Calculates string length |
| memset | Fills memory with constant byte |
| bzero | Zeros a block of memory |
| memcpy | Copies memory area |
| memmove | Copies memory area (safe for overlapping) |
| strlcpy | Safely copies string |
| strlcat | Safely concatenates strings |
| toupper | Converts to uppercase |
| tolower | Converts to lowercase |
| strchr | Locates character in string |
| strrchr | Locates last character in string |
| strncmp | Compares strings |
| memchr | Searches character in memory block |
| memcmp | Compares memory blocks |
| strnstr | Locates substring |
| atoi | Converts string to integer |

### Additional Functions
| Function | Description |
|--------|-----------|
| ft_substr | Creates substring from string |
| ft_strjoin | Concatenates two strings |
| ft_strtrim | Removes specific characters from start/end |
| ft_split | Splits string using delimiter |
| ft_itoa | Converts integer to string |
| ft_strmapi | Applies function to each string character |
| ft_striteri | Applies function to each character with index |
| ft_putchar_fd | Writes character to file descriptor |
| ft_putstr_fd | Writes string to file descriptor |
| ft_putendl_fd | Writes string with newline to fd |
| ft_putnbr_fd | Writes number to file descriptor |

## ⚙️ How to Use

1. Clone the repository:
```bash
git clone https://github.com/SirAlabar/libft.git
```

2. Compile the library:
```bash
make
```

3. To use in your project, include the header and link the library:
```c
#include "libft.h"
```

4. To compile your program with libft:
```bash
gcc your_program.c -L. -lft
```

## 📋 Project Rules

- All functions must comply with 42's Norm
- Global variables are not allowed
- Using forbidden functions will result in grade 0
- All files must include libft.h header
- Makefile must contain rules: all, clean, fclean and re

## 🌟 Bonus

The project includes functions for linked list manipulation:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|--------|-----------|
| ft_lstnew | Creates new node |
| ft_lstadd_front | Adds node at beginning |
| ft_lstsize | Counts number of nodes |
| ft_lstlast | Returns last node |
| ft_lstadd_back | Adds node at end |
| ft_lstdelone | Deletes content of one node |
| ft_lstclear | Deletes and frees list |
| ft_lstiter | Applies function to each node |
| ft_lstmap | Applies function and creates new list |

## 📄 License

This project is under the MIT License. See the [LICENSE](LICENSE) file for details.

## 👋 Author

Made with ❤️ by Alabar

[![Linkedin Badge](https://img.shields.io/badge/-Hugo%20Leonardo-blue?style=flat-square&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/hugo-leonardo-40b941106/)](https://www.linkedin.com/in/hugo-leonardo-40b941106/)
[![Github Badge](https://img.shields.io/badge/-SirAlabar-000?style=flat-square&logo=Github&logoColor=white&link=https://github.com/SirAlabar)](https://github.com/SirAlabar)
