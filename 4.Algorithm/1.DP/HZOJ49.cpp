/*************************************************************************
	> File Name: HZOJ49.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年04月22日 星期四 16时11分47秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_V 100000
int dp[MAX_V + 5];

int main() {
    int V, n, v, w, s;
    cin >> V >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v >> w >> s;
        for (int k = 0; k < s; k++) {
            for (int j = V; j >= v; j--) {
                dp[j] = max(dp[j], dp[j - v] + w);
            }
        }
    }
    cout << dp[V] << endl;
    return 0;

}
