/*************************************************************************
	> File Name: 14.my_printf.cpp
	> Autho
	> Mail: 
	> Created Time: 2020年02月10日 星期一 16时41分16秒
 ************************************************************************/

#include<stdio.h>

#define PUTC(a) putchar(a), ++cnt
int my_printf(const char *frm,...){
    int cnt = 0;
    for (int i = 0; frm[i]; i++){
        PUTC(frm[i]);
    }
    return cnt;
}
int main(){
    printf("hello world\n");
    my_printf("hello world\n");


    return 0;
}

