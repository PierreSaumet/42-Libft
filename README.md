# Libft
The first project of the "42" school. Code a library of functions in C.

## Description
The first project of the "42" school.
The main goal of this project is to discorver different functions in C that we will use for future projects.
This project allows us to familiarize ourselves with the language.

*	List of the functions
	-	ft_atoi.c
	-	ft_bzero.c
	-	ft_calloc.c
	-	ft_isalnum.c
	-	ft_isalpha.c
	-	ft_isascii.c
	-	ft_isdigit.c
	-	ft_isprint.c
	-	ft_itoa.c
	-	ft_memccpy.c
	-	ft_memchr.c
	-	ft_memcmp.c
	-	ft_memcpy.c
	-	ft_memmove.c
	-	ft_memset.c
	-	ft_split.c
	-	ft_strchr.c
	-	ft_strdup.c
	-	ft_strjoin.c
	-	ft_strlcat.c
	-	ft_strlcpy.c
	-	ft_strlen.c
	-	ft_strmapi.c
	-	ft_strncmp.c
	-	ft_strnstr.c
	-	ft_strtrim.c
	-	ft_substr.c
	-	ft_tolower.c
	-	ft_toupper.c

###	What have I learned?
>Different types (int, char , unsigned ...).
>The given arguments and the return of a function.
>"const" keyword.
>Difference between "stack" and "heap"
>Use of "malloc" and "sizeof"
>Use of pointers (char *str)
>Use of Makefile

### What difficulties did I encounter?
As a nvice, my biggest difficulty was knowing where to start the project, which function.
In addition, we are learning a lot of new knowledge through this project.
One of the major difficulties that I may have had was in understanging how "malloc" works and how to use it.

## Final Grade: 
```diff
+ 107%
# (min to pass = 100%)
```

## Installation
_Follow these instructions to install the project._

1.	Clone the repository
	```sh
	https://github.com/PierreSaumet/42-Libft.git
	```
2.	Compile the project.
	```sh
	make
	```

Well done, you have created a static library: libft.a

## Usage
_Create a main.c for example:_

Say- C language
```
#include <stdio.h>
#include "libft.h"

int		main( void )
{
	char	*str;

	str = "Hello World!";
	printf("The size of -%s- is %ld\n", str, ft_strlen(str));
	printf("The size of -- is %ld\n", ft_strlen(""));
	return (0);
}
```

>	Compile yout program
```sh
	gcc main.c -L. -lft
```

>	Run it
```sh
	./a.out
```

> It will display :


![](libft_gif.gif)

