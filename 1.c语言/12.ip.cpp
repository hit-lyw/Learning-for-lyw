/*************************************************************************
	> File Name: 12.ip.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月13日 星期六 13时48分25秒
 ************************************************************************/
#include <stdio.h>

union IP {
    unsigned int num;
    struct {
        unsigned char a1;
        unsigned char a2;
        unsigned char a3;
        unsigned char a4;
    }ip;

};


int main() {
    char str[100];
    IP p;
    int a[4];
    while (~scanf("%s", str)) {
        sscanf(str, "%d.%d.%d.%d", a + 0, a + 1, a + 2, a + 3);
        p.ip.a1 = a[3];
        p.ip.a2 = a[2];
        p.ip.a3 = a[1];
        p.ip.a4 = a[0];
        printf("%u\n", p.num);
    }
    return 0;
}
