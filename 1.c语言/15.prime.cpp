/*************************************************************************
	> File Name: 15.prime.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月09日 星期二 20时40分16秒
 ************************************************************************/
#include <stdio.h>

#define max_n 1000

int prime[max_n + 5] = {0};

void init_prime() {
    prime[0] = 1, prime[1] = 1;
    for (int i = 2; i <= max_n; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= max_n; j++) {
            prime[j] = 1;
        }
    }
    return ;
}

int main() {
    init_prime();
    int n;
    while(~scanf("%d", &n)) {
        printf("%s\n", prime[n] ? "NO" : "Yes");
    }

    return 0;
}
