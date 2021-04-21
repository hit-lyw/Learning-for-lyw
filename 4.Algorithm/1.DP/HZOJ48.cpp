/*************************************************************************
	> File Name: HZOJ48.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年04月21日 星期三 20时18分38秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 10000
int dp[MAX_N + 5];

int main() {
    int V, n, v, w;
    cin >> n >> V;
    for (int i = 1; i <= n; i++) {
        cin >> v >> w;
        for (int j = v; j <= V; j++) {
            dp[j] = max(dp[j], dp[j - v] + w);
        }
    }
    cout << dp[V] << endl;
    return 0;

}
