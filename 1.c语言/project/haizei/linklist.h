/*************************************************************************
	> File Name: linklist.h
	> Author: 
	> Mail: 
	> Created Time: 2021年03月17日 星期三 17时29分45秒
 ************************************************************************/

#ifndef _LINKLIST_H
#define _LINKLIST_H

#define offset(T, name) ((long long)(&(((T *)(0))->name)))
#define Head(p, T, name) ((T *)(((char *)p) - offset(T, name)))


struct LinkNode {
    struct LinkNode *next;
};

#endif
