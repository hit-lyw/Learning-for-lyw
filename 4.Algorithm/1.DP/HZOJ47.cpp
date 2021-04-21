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

int main() {
    int V, n;
    cin >> V >> n;
    int dp[2][MAX_V + 5];
    int v[n + 5], w[n + 5];
    for (int i = 1; i <= n; i++) {
        cin >> v[i] >> w[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= V; j++){
            dp[i % 2][j] = dp[(i - 1) % 2][j];
            if (j >= v[i]) dp[i % 2][j] = max(dp[(i - 1) % 2][j - v[i]] + w[i], dp[i % 2][j]);
        }
    }

    cout << dp[n % 2][V] << endl;
}
