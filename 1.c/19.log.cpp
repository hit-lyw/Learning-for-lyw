/*************************************************************************
	> File Name: 19.log.cpp
	> Author: 
	> Mail: 
	> Created Time: 2021年03月11日 星期四 19时16分22秒
 ************************************************************************/

#include <stdio.h>

#define log(frm, arg...) {
    printf("[%s : %s : %d]", __FILE__, __func__, __LINE__);
    printf(frm, ##arg);
    printf("\n");
}
