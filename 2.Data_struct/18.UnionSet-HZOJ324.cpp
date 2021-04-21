/*************************************************************************
	> File Name: 18.UnionSet-HZOJ324.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年04月19日 星期一 19时34分12秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX_N 500000


struct UnionSet {
    int fa[MAX_N + 5];
    void init(n) {
        for (int i = 1; i <= n; i++) fa[i] = i;
    }
    int get(int a) {
        return (fa[a] = (a == fa[a]
    }
    void merge(int a, int b) {
        
    }
}

