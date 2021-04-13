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

三．