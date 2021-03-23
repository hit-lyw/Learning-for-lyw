/*************************************************************************
	> File Name: 9.fac.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月07日 星期五 12时41分13秒
 ************************************************************************/

#include<stdio.h>

int fac(int n){
    if(n==0)return 1;
    return n*fac(n-1);
}

int main(){
    int n;
    while (~scanf("%d",&n)){
        printf("fac(%d)=%d\n",n,fac(n));
    }

    return 0;
}
