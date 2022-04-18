# 0x11. C - printf
## Description
Write a printf function.
## Requirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Not allowed to use global variables
* No more than 5 functions per file
* The prototypes of all functions should be included in your header file called holberton.h
* All header files should be include guarded
## Authorized functions and macros
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)
## Compilation
Our code will be compiled using:
$ gcc -Wall -Werror -Wextra -pedantic *.c
### [0.0 I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](./print_char.c)
* a function that produces output according to a format and handles the %c conversion specifier.
### [0.1 I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](./print_string.c)
* a function that produces output according to a format and handles the %s con
version specifier.
### [0.2 I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](./print_percent.c)
* a function that produces output according to a format and handles the %% con
version specifier.
### [1.0 Education is when you read the fine print. Experience is what you get if you don't](./print_number.c)
* Handle the %d conversion specifier.
### [1.1 Education is when you read the fine print. Experience is what you get if you don't](./print_number.c)
* Handle the %i conversion specifier.
### [2. Just because it's in print doesn't mean it's the gospel](./man_3_printf)
* Create a man page for your function.
### [3. With a face like mine, I do better in print](./print_binary.c)
* Handle the following custom conversion specifiers:
* b: the unsigned int argument is converted to binary
### [4.0 What one has not experienced, one will never understand in print](./print_unsign.c)
* a function that produces output according to a format and handles the %u con
version specifier.
### [4.1 What one has not experienced, one will never understand in print](./print_octal.c)
* a function that produces output according to a format and handles the %o con
version specifier.
### [4.2 What one has not experienced, one will never understand in print](./print_hexlower.c)
* a function that produces output according to a format and handles the %x con
version specifier.
### [4.3 What one has not experienced, one will never understand in print](./print_hexUpper.c)
* a function that produces output according to a format and handles the %X con
version specifier.
### [5. What one has not experienced, one will never understand in print](./_putchar.c)
* Use a local buffer of 1024 chars in order to call write as little as possible.
### [6. What one has not experienced, one will never understand in print](./print_unprintable.c)
* Handle the following custom conversion specifier:
* S : prints the string.
* Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
### [7. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print ](./print_pointer.c)
* Handle the following conversion specifier: p.
### [14. Print is the sharpest and the strongest weapon of our party](./print_rev.c)
* Handle the following custom conversion specifier:
* r : prints the reversed string
### [15. The flood of print has turned reading into a process of gulping rather than savoring](./print_rot13.c)
* Handle the following custom conversion specifier:
* R: prints the rot13'ed string
## Author
* **Idriss Djiofack** 
