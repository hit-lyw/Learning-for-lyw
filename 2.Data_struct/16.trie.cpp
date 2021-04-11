/*************************************************************************
	> File Name: 16.trie.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年04月05日 星期一 17时36分38秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BASE 26
#define BASE_LETTER 'a'


typedef struct Node {
    int flag;
    struct Node *next[BASE];
} Node;

Node *getNewNoede() {
    Node *p = (Node *)malloc(sizeof(Node));
    return p;
}

inline int code(char ch) {
    return ch - BASE_LETTER;
}

void insert(Node *root, char *str) {
    Node *p = root;
    for (int i = 0; str[i]; i++) {
        if (p->next[code(str[i])] == NULL) p->next[code(str[i])] = getNewNoede();
        p = p->next[code(str[i])];
    }
    p->flag = 1;
    return ;
}

int query(Node *root, char *str) {
    Node *p = root;
    for (int i = 0; str[i]; i++) {
        p = p->next[code(str[i])];
        if (p == NULL) return 0;
    }
    return p->flag;
}

void output(Node *root, int k, char *buff) {
    if (root == NULL) return ;
    if (root->flag) printf("%s\n", buff);
    for (int i = 0;i < BASE; i++) {
        buff[k] = BASE_LETTER + i;
        buff[k + 1] = '\0';
        output(root->next[i], k + 1, buff);
    }
    return ;
}

void clear(Node *root) {
    if (root == NULL) return ;
    for (int i = 0; i < BASE; i++) {
        clear(root->next[i]);
    }
    free(root);
    return ;
}

int main() {
    char str[1000];
    int n;
    Node *root = getNewNoede();
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        insert(root, str);
    }
    output(root, 0, str);
    while (~scanf("%s", str)) {
        printf("query %s, result = %s\n", str, query(root , str) ? "Yes" : "No");
    }
    return 0;
}
