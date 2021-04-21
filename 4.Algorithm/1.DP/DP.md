# 一．基本步骤(状态定义)

**1、设计状态变量**

**2、确定状态转移方程**

**3、初始化变量**

**4、考虑输出**

**5、考虑是否可状态压缩**

# 二．经典例题ＨＺＯＪ４３

## 1．从下至上

```Ｃ＋＋
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
```

## 2.从上至下

```
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
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            f[i][j] += max(f[i - 1][j], f[i - 1][j - 1]);//此处缺少边界条件判断

        }
    }
    cout << f[1][1];
    return 0;

}
```

由俩种状态定义可得出状态定义对与ｄｐ问题的复杂与否起着至关重要的作用

# 三．动态规划的优化

## 1.状态定义优化

ｅｇ：如二．中的题目

## 2.状态转移方程优化

并不是改写状态转移方程而是改写状态转移的方式

ＨＺＯＪ44通过一个二分对000111类型问题的查找优化，进而达到了对状态转移的优化

```
#include<iostream>
using namespace std;
#define MAX_N 500000

int len[MAX_N + 5], ans = 0;
int dp[MAX_N + 5];
int a[MAX_N + 5];

int bs(int *arr, int l, int r, int x) {
    if (l == r) return l;
    int mid = (l + r) >> 1;
    if (arr[mid] < x) return bs(arr, mid + 1, r, x);
    return bs(arr, l, mid, x);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i] = 1;
        len[i] = n + 1;
    }
    len[++ans] = a[1];

    for (int i = 2; i <= n; i++) {
        dp[i] = bs(len, 1, ans + 1, a[i]);
        len[dp[i]] = a[i];
        ans = max(dp[i], ans);
    }
    cout << ans << endl;
    return 0;
｝
```

## 3.程序优化