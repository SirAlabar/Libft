<div align="center">

# 📚 Libft

### Minha própria biblioteca C com funções essenciais
[![Norminette](https://github.com/SirAlabar/libft/actions/workflows/norminette.yml/badge.svg)](https://github.com/SirAlabar/libft/actions/workflows/norminette.yml)
[![Build](https://github.com/SirAlabar/libft/actions/workflows/build.yml/badge.svg)](https://github.com/SirAlabar/libft/actions/workflows/build.yml)

<img src="/api/placeholder/800/400" alt="42 Logo" width="800px">

</div>

## 📝 Sobre o projeto

Este projeto é o primeiro da grade curricular da 42. O objetivo é recriar diversas funções da biblioteca padrão do C (libc) e algumas funções adicionais que serão úteis ao longo do curso.

## 🎯 Nota Final
<div align="center">

![Grade](https://img.shields.io/badge/Grade-125%2F100-brightgreen)

</div>

## 🛠️ Funções implementadas

### Funções da Libc
| Função | Descrição |
|--------|-----------|
| isalpha | Verifica se é um caractere alfabético |
| isdigit | Verifica se é um dígito |
| isalnum | Verifica se é alfanumérico |
| isascii | Verifica se está na tabela ASCII |
| isprint | Verifica se é um caractere imprimível |
| strlen | Calcula o tamanho de uma string |
| memset | Preenche memória com um byte constante |
| bzero | Zera um bloco de memória |
| memcpy | Copia área de memória |
| memmove | Copia área de memória (seguro para sobreposição) |
| strlcpy | Copia string de forma segura |
| strlcat | Concatena strings de forma segura |
| toupper | Converte para maiúsculo |
| tolower | Converte para minúsculo |
| strchr | Localiza caractere em string |
| strrchr | Localiza último caractere em string |
| strncmp | Compara strings |
| memchr | Busca caractere em bloco de memória |
| memcmp | Compara blocos de memória |
| strnstr | Localiza substring |
| atoi | Converte string para inteiro |

### Funções adicionais
| Função | Descrição |
|--------|-----------|
| ft_substr | Cria substring a partir de string |
| ft_strjoin | Concatena duas strings |
| ft_strtrim | Remove caracteres específicos do início/fim |
| ft_split | Divide string usando delimitador |
| ft_itoa | Converte inteiro para string |
| ft_strmapi | Aplica função a cada caractere da string |
| ft_striteri | Aplica função a cada caractere com índice |
| ft_putchar_fd | Escreve caractere em file descriptor |
| ft_putstr_fd | Escreve string em file descriptor |
| ft_putendl_fd | Escreve string com newline em fd |
| ft_putnbr_fd | Escreve número em file descriptor |

## ⚙️ Como usar

1. Clone o repositório:
```bash
git clone https://github.com/SirAlabar/libft.git
```

2. Compile a biblioteca:
```bash
make
```

3. Para usar em seu projeto, inclua o header e link a biblioteca:
```c
#include "libft.h"
```

4. Para compilar seu programa com a libft:
```bash
gcc seu_programa.c -L. -lft
```

## 📋 Regras do projeto

- Todas as funções devem estar de acordo com a Norma da 42
- Não são permitidas variáveis globais
- Uso de funções proibidas resultará em nota 0
- Todos os arquivos devem incluir o header libft.h
- O Makefile deve conter as regras: all, clean, fclean e re

## 🌟 Bônus

O projeto inclui funções para manipulação de listas encadeadas:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Função | Descrição |
|--------|-----------|
| ft_lstnew | Cria novo nó |
| ft_lstadd_front | Adiciona nó no início |
| ft_lstsize | Conta número de nós |
| ft_lstlast | Retorna último nó |
| ft_lstadd_back | Adiciona nó no final |
| ft_lstdelone | Deleta conteúdo de um nó |
| ft_lstclear | Deleta e libera lista |
| ft_lstiter | Aplica função a cada nó |
| ft_lstmap | Aplica função e cria nova lista |

## 📄 Licença

Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

## 👋 Autor

Feito com ❤️ por Alabar

[![Linkedin Badge](https://img.shields.io/badge/-Hugo%20Leonardo-blue?style=flat-square&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/hugo-leonardo-40b941106/)](https://www.linkedin.com/in/hugo-leonardo-40b941106/)
[![Github Badge](https://img.shields.io/badge/-SirAlabar-000?style=flat-square&logo=Github&logoColor=white&link=https://github.com/SirAlabar)](https://github.com/SirAlabar)
