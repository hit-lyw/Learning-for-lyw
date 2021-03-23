/*************************************************************************
	> File Name: 7.program_struct.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 10时54分55秒
 ************************************************************************/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand(time(0));
    int a,b;
    scanf("%d%d",&a,&b);
    if (a-b){
        printf("not equal\n");
    } else {
        printf("equal\n"); 
    }

    if ((a++)&&(b++)){
        printf("true\n");
    } else {
        printf("false\n");
    }
[<0;46;17M]Z    printf("a = %d, b = %d\n",a,b);

    for (int i = 0; i < 10; i++){
        i&& printf(" ");
        printf("%d",i);
    }
    return 0;

}
