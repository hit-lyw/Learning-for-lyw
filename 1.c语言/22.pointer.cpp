/*************************************************************************
	> File Name: 22.pointer.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月13日 星期六 15时59分00秒
 ************************************************************************/
#include <stdio.h>
#define offset(T, a) (long)(&(((T *)(NULL))->a))
#define pchar char *

typedef char * ppchar;
struct Data {
    double a;
    int b;
    int c;

};

int main() {
    int num1 = 0x616263;
    int num2 = 0x61626364;
    pchar p1, p2;
    ppchar p3, p4;
    printf("sizeof(p1) = %lu, sizeof(p2) = %lu\n", sizeof(p1), sizeof(p2));
    printf("sizeof(p1) = %lu, sizeof(p2) = %lu\n", sizeof(p3), sizeof(p4));
    printf("%s\n", (char *)(&num1));
    printf("%s\n", (char *)(&num2));
    printf("%s\n", (char *)(&num2 + 1));
    offset(struct Data, a);
    printf("%ld\n", offset(struct Data, a));
    printf("%ld\n", offset(struct Data, b));
    printf("%ld\n", offset(struct Data, c));
    return 0;
}
