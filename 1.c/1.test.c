/*************************************************************************
	> File Name: 1.test.c
	> Author: 
	> Mail: 
	> Created Time: 2020年01月19日 星期日 12时52分48秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    printf("has %d digits \n",printf("%d",n));//输出一个数字的位数


    char str[100];
    scanf("%[^\n]s",str);
    printf("has %d chars\n",printf("%s",str));//输出一个字符串的位数（包括空格）


    return 0;
}
