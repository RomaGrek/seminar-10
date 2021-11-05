#include <stdio.h>
#include "inttypes.h"
#include "stdlib.h"
#include "string.h"

#define DEFINE_LIST(type)                                                                                       \
    struct list_##type {                                                                                        \
        type value;                                                                                             \
        struct list_##type* next;                                                                               \
    };                                                                                                          \
    void list_##type##_print(const struct list_##type * l) {                                                    \
        while(l) {                                                                                              \
            if(strcmp(#type, "int64_t") == 0) {printf("% " PRId64, l->value);}                                  \
            else if (strcmp(#type, "double") == 0) {printf("%lf ", l->value);}                                  \
            else {                                                                                              \
                fprintf(stderr, "%s", "invalid type bro...");                                                   \
                abort();                                                                                        \
            }                                                                                                   \
            l = l->next;                                                                                        \
        }                                                                                                       \
    }

DEFINE_LIST(int64_t)
DEFINE_LIST(double)

int main() {



    struct list_int64_t el3_list1_i = {4, NULL};
    struct list_int64_t el2_list1_i = {5, &el3_list1_i};
    struct list_int64_t el1_list1_i = {9, &el2_list1_i};
    list_int64_t_print(&el1_list1_i);

    struct list_double el6_list2_d = {6.6, NULL};
    struct list_double el5_list2_d = {5.5, &el6_list2_d};
    struct list_double el4_list2_d = {4.4, &el5_list2_d};
    struct list_double el3_list2_d = {3.3, &el4_list2_d};
    struct list_double el2_list2_d = {2.2, &el3_list2_d};
    struct list_double el1_list2_d = {1.1, &el2_list2_d};
    list_double_print(&el1_list2_d);
    return 0;
}