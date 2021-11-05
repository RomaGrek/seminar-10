#include <stdio.h>
/* нужно исправить dbl так, что бы результат был корректен */

#define dbl(y) (y) * 2

int main() {
    printf("%d", dbl(3 + 3));
    return 0;
}
