#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int main(void);
int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);
int handle_format_string(const char *format, va_list arg);

#endif
