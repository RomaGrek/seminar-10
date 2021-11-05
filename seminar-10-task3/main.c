#include <stdio.h>
#include "inttypes.h"
#include "stdlib.h"

void error(const char *s){
    fprintf(stderr, "%s", s);
    abort();
}

// #define _print(type, x) type##_print(x)

#define print(x) _Generic((x), int64_t : int64_t_print(x), double : double_print(x), default : error("wtf"))

void int64_t_print(int64_t i) { printf("%" PRId64, i); }
void double_print(double d) { printf("%lf", d); }
void print_newline() { puts(""); }

int main() {
    int64_t x = 42;
    double d = 99.99;
    print(x);
    print_newline();
    print(d);
    return 0;
}


/* пример с склеиванием строк
void int64_t_print(int64_t i) { printf("%" PRId64, i); }
void double_print(double d) { printf("%lf", d); }
void print_newline() { puts(""); }

int main() {
    int64_t x = 42;
    double d = 99.99;
    print(int64_t, x);
    print_newline();
    print(double, d);
    return 0;
}
*/
