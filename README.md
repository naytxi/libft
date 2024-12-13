![github-header-image(4) (4 ª copia)](https://github.com/user-attachments/assets/7383fb7c-67a0-4d42-a3f9-d8f9f7f30b6d)

![progammer gif](https://i.pinimg.com/originals/f9/57/6f/f9576fca9fc8ef79976a1d6327bbe9ae.gif)


<h2>🚀ABOUT</h2>

This is the first functions library we create al 42 cursus, thanks to this project we can use all this functions at more difficult works.

<h2>👀LIST</h2>

Functions from <ctype.h> library

    ft_isascii	- test for ASCII character.
    ft_isalnum	- alphanumeric character test.
    ft_isalpha	- alphabetic character test.
    ft_islower * - lower-case character test.
    ft_isupper * - upper-case character test.
    ft_isdigit	- decimal-digit character test.
    ft_isxdigit * - hexadecimal-digit character test.
    ft_isprint	- printing character test (space character inclusive).
    ft_isgraph * - printing character test (space character exclusive).
    ft_isspace * - white-space character test.
    ft_isblank * - space or tab character test.
    ft_ispunct * - punctuation character test.
    ft_iscntrl * - control character test.
    ft_tolower	- upper case to lower case letter conversion.
    ft_toupper	- lower case to upper case letter conversion.


Functions from <stdlib.h> library

    ft_atoi	- convert ASCII string to integer.
    ft_atof * - convert ASCII string to integer.
    ft_calloc	- memory allocation.

Functions from <strings.h> library

    ft_bzero	- write zeroes to a byte string.
    ft_memset	- write a byte to a byte string.
    ft_memchr	- locate byte in byte string.
    ft_memcmp	- compare byte string.
    ft_memmove	- copy byte string.
    ft_memcpy	- copy memory area.
    ft_memccpy	- copy string until character found.

Functions from <string.h> library

    ft_strlen	- find length of string.
    ft_strlen_2 * - find length of 2D array (i.e. splitted string).
    ft_strchr	- locate character in string (first occurrence).
    ft_strrchr	- locate character in string (last occurence).
    ft_strstr * - locate a substring in a string.
    ft_strnstr	- locate a substring in a string (size-bounded).
    ft_strcmp * - compare strings.
    ft_strncmp * - compare strings (size-bounded).
    ft_strnrcmp	- reversely compare strings (size-bounded).
    ft_strcpy * - copy strings.
    ft_strncpy * - copy strings (size-bounded).
    ft_strdup	- save a copy of a string (with malloc).
    ft_strndup * - save a copy of a string (with malloc, size-bounded).
    ft_strcat * - concatenate strings (s2 into s1).
    ft_strncat * - concatenate strings (s2 into s1, size-bounded).
    ft_strlcpy	- size-bounded string copying.
    ft_strlcat	- size-bounded string concatenation.

Non-standard functions

    ft_swap * - swap value of two integers.
    ft_putchar * - output a character to stdout.
    ft_putchar_fd	- output a character to given file.
    ft_putstr * - output string to stdout.
    ft_putstr_fd	- output string to given file.
    ft_putendl * - output string to stdout with newline.
    ft_putendl_fd	- output string to given file with newline.
    ft_putnbr * - output integer to stdout.
    ft_putnbr_fd	- output integer to given file.
    ft_itoa	- convert integer to ASCII string.
    ft_substr	- extract substring from string.
    ft_strtrim	- trim beginning and end of string with the specified characters.
    ft_strjoin	- concatenate two strings into a new string (with malloc).
    ft_split	- split string, with specified character as delimiter, into an array of strings.
    ft_split_free * - free splitted string.
    ft_strmapi	- create new string from modifying string with specified function.
    ft_ftoa_rnd	- convert float to ASCII string.


<h2>🔍HOW TO WORKS</h2>

.c Files

Where all of your functions will be written in.
.h (Header)

Your header file is useful for 2 things:

    First, instead of doing for example #include <unistd.h> in all of your .c files, you just write it once in your header and all of your .c files will read it from your header file.
    Secondly, let's say one of your .c files uses another function from another .c file, well instead of writting that function above, just write #include "libft.h" and it will find it in your header file.

Make sure you add #include "libft.h" in all of your .c files.
Makefile
Makefile is where you will create a file to compile your projects. Remember how in the piscine, you created an int main and gcc to compile the projects, well with a Makefile, you don't have to do that anymore, you just type make once you have created your Makefile.

✈️ Welcome to my journey.
