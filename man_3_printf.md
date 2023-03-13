---
title: _printf
section: 3
header: User Manual
footer: _printf 1.0.0
date: March 12, 2023
---

# NAME

_printf - It's kind of like printf, except it's not as good. However, Betty seems to like it and we are pretty fond of it as well! 

# SYNOPSIS

\#include "main.h"

_printf("%command", arguments)

# DESCRIPTION

_printf is a simple reimagining of the printf function available in the stdlib.h library. It has about 1/8th of the function butu 100% of our heart and souls in it

-%c: this command will take a character from "A..Z or "a..z" and print it to stdout. Wow.

-%s: this command will take a sting of characters and print it to stdout.

-%%: this pivital command does the most important job of all...it prints percent symbols.

-%i: this command will take a whole number like 12 and print it to stdout. This command will not print numbers with decimals. (example: 12, 12.1, 12.9 would all print as 12).

-%d: this command also takes a whole number like 12 and prints it to stdout. This command will not print numbers with decimals either. See example abov.

# BUGS

%d has at times multiplied a number into outerspace, this issue is rare and not very easy to replicate

# AUTHORS

Chris Diggs & Tayler Coon
