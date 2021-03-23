/*************************************************************************
	> File Name: 4.funcC.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月09日 星期二 19时33分11秒
 ************************************************************************/
#include <stdio.h>
#include "2.funcB.h"

int funcC(int n) {
    printf("funcC : %d\n", n);
    if (n == 0) return 1;
    funcB(n - 1);
    return n;
}
