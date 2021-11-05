#include <stdio.h>
#include <stdint-gcc.h>
/* Напишите программу которая будет использовать этот макрос для вывода переменной.  */
#define print_var(x) printf(#x " is %d", x )

int main() {
    int32_t x = 2;
    /* print_var(x); */
    print_var(42);
    return 0;
}
