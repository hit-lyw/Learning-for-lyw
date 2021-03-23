/*************************************************************************
	> File Name: 5.funcB.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月09日 星期二 19时41分25秒
 ************************************************************************/
#include <stdio.h>

int funcB(int n) {
    printf("funcB : %d\n", n);
    if (n == 0) return 1;
    return n * funcB(n - 1);

}
