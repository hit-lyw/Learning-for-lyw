/*************************************************************************
	> File Name: HZOJ43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年04月12日 星期一 16时01分51秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 1000
int f[MAX_N +5][MAX_N +5];


int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> f[i][j];
        }
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            f[i][j] += max(f[i + 1][j], f[i + 1][j + 1]);

        }
    }
    cout << f[1][1];
    return 0;
}
