/*************************************************************************
	> File Name: 2.printf.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月19日 星期日 18时53分31秒
 ************************************************************************/

#include <stdio.h>
int main(){
    char str[100], str2[100];
    int ret;
    /*while ((ret=scanf("%[^\n]s",str))!=EOF){
        getchar();
        printf("%s ret=%d\n",str,ret);

    }*/
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    sprintf(str2, "%d.%d.%d.%d", a, b, c, d);//可以将格式化的字符串存在str2
    FILE *fd = fopen("out", "wb");

    fprintf(fd, "%s", str2);
    printf("str2 = %s\n", str2);
    return 0;
}    
