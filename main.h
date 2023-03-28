#ifndef MAIN_H_
#define MAIN_H_

int _putchar(char c);
int printstr(char *str);
int printnum(int n);
int countnum(int n);
int print_c(va_list ptr);
int print_s(va_list ptr);
int print_p(va_list ptr);
int print_i(va_list ptr);
int _printf(const char *format, ...);

/**
 * struct f_ops - struct that links format to appropriate function
 * @c: Format specifier string
 * @f: Pointer to appropriate function.
 */
typedef struct f_ops
{
	char *c;
	int (*f)(va_list);
} f_ops;

#endif
