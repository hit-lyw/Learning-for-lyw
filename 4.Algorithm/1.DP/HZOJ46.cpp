/*************************************************************************
	> File Name: HZOJ46.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年04月21日 星期三 16时02分08秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
#define MAX_N 500000
int dp[MAX_N + 5];

bool is_hw(string s,int l,int r) {
    while (l < r) {
        if (s[l++] - s[r--]) return false;
    }
    return true;

}


int main() {
    string s;
    cin >> s;
    dp[0] = 0;
    
    for (int i = 1; i <= s.size(); i++) {
        dp[i] = dp[i - 1] + 1;
        for (int j = 0; j < i; j++) {
            if (is_hw(s, j, i - 1)) dp[i] = min(dp[i], dp[j] + 1);
        }
    }
    cout << dp[s.size()] - 1 << endl;

    return 0;
}
