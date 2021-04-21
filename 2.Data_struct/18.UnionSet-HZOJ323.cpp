/*************************************************************************
	> File Name: 18.UnionSet-HZOJ323.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年04月19日 星期一 19时08分00秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX_N 10000

struct Data {
    int p, d;
} arr[MAX_N + 5];

struct UnionSet {
    int fa[MAX_N + 5];
    void init(int n) {
        for (int i = 1; i <= n; i++) fa[i] = i;
    }
    int get(int a) {
        return (fa[a] = (a == fa[a] ? a : get(fa[a])));
    }
    void merge(int a, int b) {
        fa[get(a)] = get(b);
    }
};

bool cmp(const Data &a, const Data &b) {
    return a.p > b.p;
}

UnionSet u;

int solve() {
    int n;
    if(!(cin >> n)) return 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].p >> arr[i].d;
    }
    sort(arr, arr + n, cmp);
    u.init(MAX_N);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (u.get(arr[i].d) == 0) continue;
        ans += arr[i].p;
        int day = u.get(arr[i].d);
        u.merge(day, day - 1);
    }
    cout << ans << endl;
    return 1;
}

int main() {
    while (solve());
    return 0;
}
