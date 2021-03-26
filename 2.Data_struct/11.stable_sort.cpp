/*************************************************************************
	> File Name: 11.stable_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月24日 星期三 15时09分51秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define swap(a, b) {\
    a ^= b; b ^= a; a ^= b;\
}

#define TEST(arr, n, func, args...) {\
    int *num = (int *)malloc(sizeof(int) * n);\
    memcpy(num, arr, sizeof(int) * n);\
    output(num, n);\
    printf("%s =", #func);\
    func(args);\
    output(num, n);\
    free(num);\
}

void insert(int *num, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0 && num[j] < num[j - 1]; j--) {
            swap(num[j], num[j - 1]);
        }
    }
    return ;
}

void bubble_sort(int *num, int n) {
    for (int i = 1; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < n - i; j++) {
            if (num[j] > num[j + 1]) {
                flag = 1;
                swap(num[j], num[j + 1]);
            }
        }
        if (!flag) break;
    }
    return ;
}

void merge(int *, int, int, int);

void merge_sort(int *num, int l, int r) {
    if (r - l <= 1) {
        if(r - l == 1 && num[l] > num[r]) {
            swap(num[l], num[r]);
        }
        return ;
    }
    int mid = (l + r) >> 1;
    merge_sort(num, l, mid);
    merge_sort(num, mid + 1, r);
    merge(num, l, mid + 1, r);
}

void merge(int *num, int p1, int p2, int p3) {
    int *temp = (int *)malloc(sizeof(int) * (p3 - p1 + 1));
    int k = 0;
    int m1 = p1, m2 = p2, m3 = p3;
    while (m1 <= p2 - 1 || m2 <= p3) {
        if (m2 > p3 || (m1 <= p2 - 1 && num[m1] <= num[m2])) {
            temp[k] = num[m1];
            m1++;
        } else {
            temp[k] = num[m2];
            m2++;
        }
        k++;
    }
    memcpy(num + p1, temp, sizeof(int) * (p3 - p1 + 1));
    free(temp);
    return ;
}

void randint(int *arr, int n) {
    while (n--) {
        arr[n] = rand() % 100;
    }
    return ;
}

void output(int *num, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf(" %d", num[i]);
    }
    printf("]\n");
    return ;
}

int main() {
    srand(time(0));
    #define max_op 20
    int arr[max_op];
    randint(arr, max_op);
    TEST(arr, max_op, insert, num, max_op);
    TEST(arr, max_op, merge_sort, num, 0, max_op - 1);
    TEST(arr, max_op, bubble_sort, num, max_op);


    return 0;
}
