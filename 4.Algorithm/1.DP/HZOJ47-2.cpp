/*************************************************************************
	> File Name: HZOJ47.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年04月21日 星期三 16时33分54秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100
#define MAX_V 10000
int dp[MAX_N + 5];


int main() {
    int V, n, v, w;
    cin >> V >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v >> w;
        for (int j = V; j >= v; j--) {
            dp[j] = max(dp[j], dp[j - v] + w);
        }
    }
    cout << dp[V] << endl;
}
