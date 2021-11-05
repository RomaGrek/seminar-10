#include <stdio.h>
#include "stdint.h"
#include "inttypes.h"
#include "stdlib.h"
#include "string.h"
#define list_print_v1(x) _Generic((x), struct list_int* :  print_list_int64_t(x), struct list_double* : print_list_double(x), default : error("invalid type bro..."))

void print_newline() { puts(""); }



struct list_int {
    int64_t value;
    struct list_int* next;
};

struct list_double {
    double value;
    struct list_double* next;
};


void error(const char *s){
    fprintf(stderr, "%s", s);
    abort();
}

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

int main() {


    struct list_int el3_list1_i = {4, NULL};
    struct list_int el2_list1_i = {5, &el3_list1_i};
    struct list_int el1_list1_i = {9, &el2_list1_i};

    struct list_double el6_list2_d = {6.6, NULL};
    struct list_double el5_list2_d = {5.5, &el6_list2_d};
    struct list_double el4_list2_d = {4.4, &el5_list2_d};
    struct list_double el3_list2_d = {3.3, &el4_list2_d};
    struct list_double el2_list2_d = {2.2, &el3_list2_d};
    struct list_double el1_list2_d = {1.1, &el2_list2_d};

    struct list_int el4_list3_i = {1, NULL};
    struct list_int el3_list3_i = {2, &el4_list3_i};
    struct list_int el2_list3_i = {3, &el3_list3_i};
    struct list_int el1_list3_i = {4, &el2_list3_i};

    list_print_v1(&el1_list1_i);
    print_newline();
    list_print_v1(&el1_list2_d);
    print_newline();
    list_print_v1(&el1_list3_i);

    return 0;
}
