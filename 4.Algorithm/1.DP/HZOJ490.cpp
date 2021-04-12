/*************************************************************************
	> File Name: HZOJ490.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年04月11日 星期日 21时03分05秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX_N 32767
int f[MAX_N  +5];

int main() {
    int n;
    cin >> n;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = (f[i - 1] + 2 -1) % i + 1;//将f[i]的范围调到[1, i]
    }
    int x = n;
    while (f[x] - x) x = f[x];
    cout << n + x << endl;
    return 0;
}
