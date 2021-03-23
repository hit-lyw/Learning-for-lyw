/*************************************************************************
	> File Name: 17.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月10日 星期三 19时40分43秒
 ************************************************************************/
#include <stdio.h>

int func(int* n) {
    
    return 0;
}

int main() {
    int arr[100];
    printf("arr = %p, &arr[0] = %p\n", arr, &arr[0]);
    printf("arr + 1 = %p\n", arr + 1);
    char *p = (char * )arr;
    printf("p + 1 = %p\n", p + 1);
    int n = 0;
    for (int i = 0; i < 10; i++){
        scanf("%d\n", arr + i);
    }
    func(arr, n);
    return 0;
}
