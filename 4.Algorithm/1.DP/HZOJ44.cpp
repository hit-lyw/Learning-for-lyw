/*************************************************************************
	> File Name: HZOJ44.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年04月12日 星期一 16时33分51秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 500000

int dp[MAX_N + 5];
int val[MAX_N + 5];
int main() {
    int n, ans = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> val[i];
        dp[i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (val[j] >= val[i]) continue;
            dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }
    
    cout << ans << endl;

    return 0;
}
