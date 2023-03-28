#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int main(void);
int _putchar(char c);
<<<<<<< HEAD
int _puts(char *s);
=======
int printstr(char *str);
int printnum(int n);
int countnum(int n);
int print_c(va_list ptr);
int print_s(va_list ptr);
int print_p(__attribute__ ((unused)) va_list ptr);
int print_i(va_list ptr);
>>>>>>> 73aee29b7dc99b768bd381c0d1a90aeb7436822a
int _printf(const char *format, ...);
int handle_format_string(const char *format, va_list arg);

#endif
