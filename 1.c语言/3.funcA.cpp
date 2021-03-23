/*************************************************************************
	> File Name: 3.funcA.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月09日 星期二 19时30分40秒
 ************************************************************************/
#include <stdio.h>
#include "2.funcB.h"
int funcA(int n) {
    printf("funcA : %d\n", n);
    if(n == 0) return 1;
    funcB(n - 1);
    return n;
}
