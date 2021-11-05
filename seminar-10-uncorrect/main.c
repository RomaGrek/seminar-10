#include <stdio.h>
#include "stdint.h"
#include "inttypes.h"
#include "stdlib.h"
#include "string.h"

#define DEFINE_LIST(type)                                                                                       \
    struct list_##type {                                                                                        \
        type value;                                                                                             \
        struct list_##type* next;                                                                               \
    };

#define list_print(x) _Generic((x), struct list_int64_t* : \
            const struct list_int64_t * l= x;            \
            while(l) {                                 \
                printf("%" PRId64 " ", l->value);      \
                l = l->next;                           \
            }, struct list_double* :                   \
            const struct list_double * l = x;            \
            while(l) {                                 \
                printf("%lf" " ", l->value);           \
                l = l->next;                           \
            }, default : error("invalid type bro..."));

void print_newline() { puts(""); }


/*
struct list_int {
    int64_t value;
    struct list_int* next;
};

struct list_double {
    double value;
    struct list_double* next;
};
 */


void error(const char *s){
    fprintf(stderr, "%s", s);
    abort();
}

/*
void print_list_int64_t(const struct list_int * link_first_el) {
    while (link_first_el) {
        printf("%" PRId64 " ", link_first_el->value);
        link_first_el =  link_first_el->next;
    }
}

void print_list_double(const struct list_double * link_first_el) {
    while (link_first_el) {
        printf("%lf" " ", link_first_el->value);
        link_first_el = link_first_el->next;
    }
}
 */
DEFINE_LIST(int64_t)
DEFINE_LIST(double)

int main() {


    struct list_int64_t el3_list1_i = {4, NULL};
    struct list_int64_t el2_list1_i = {5, &el3_list1_i};
    struct list_int64_t el1_list1_i = {9, &el2_list1_i};

    struct list_double el6_list2_d = {6.6, NULL};
    struct list_double el5_list2_d = {5.5, &el6_list2_d};
    struct list_double el4_list2_d = {4.4, &el5_list2_d};
    struct list_double el3_list2_d = {3.3, &el4_list2_d};
    struct list_double el2_list2_d = {2.2, &el3_list2_d};
    struct list_double el1_list2_d = {1.1, &el2_list2_d};

    struct list_int64_t el4_list3_i = {1, NULL};
    struct list_int64_t el3_list3_i = {2, &el4_list3_i};
    struct list_int64_t el2_list3_i = {3, &el3_list3_i};
    struct list_int64_t el1_list3_i = {4, &el2_list3_i};
    const struct list_int64_t * l= &el1_list1_i;


    list_print(&el1_list1_i);
    print_newline();
    list_print(&el1_list2_d);
    print_newline();
    list_print(&el1_list3_i);

    return 0;
}