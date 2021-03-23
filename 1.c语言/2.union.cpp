/*************************************************************************
	> File Name: 2.union.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月08日 星期一 20时36分09秒
 ************************************************************************/

#include <stdio.h>

int funcB(int);
int funcA(int);

int funcB(int n){
    printf("funcB : %d\n", n);
    if (n == 0) return 0;
    funcA(n - 1);
    return n;
}


int funcA(int n) {
    printf("funcA : %d\n", n);
    if (n == 0) return 0;
    funcB(n - 1);
    return n;
}
