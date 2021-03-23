/*************************************************************************
	> File Name: test.h
	> Author: 
	> Mail: 
	> Created Time: 2021年03月16日 星期二 13时57分02秒
 ************************************************************************/

#ifndef _TEST_H
#define _TEST_H
#include <haizei/linklist.h>

#define COLOR(a, b) "\033[" #b "m" a "\033[0m"
#define GREEN(a) COLOR(a, 32)
#define RED(a) COLOR(a, 31)
#define BLUE(a) COLOR(a, 34)
#define YELLOW(a) COLOR(a, 33)

#define COLOR_HL(a, b) "\033[1;" #b "m" a "\033[0m"
#define GREEN_HL(a) COLOR_HL(a, 32)
#define RED_HL(a) COLOR_HL(a, 31)
#define BLUE_HL(a) COLOR_HL(a, 34)
#define YELLOW_HL(a) COLOR_HL(a, 33)


#define TEST(a, b)\
void a##_haizei_##b();\
__attribute__((constructor))\
void add##_haizei_##a##_haizei_##b() {\
    add_function(a##_haizei_##b, #a "." #b);\
}\
void a##_haizei_##b()


#define EXPECT(a, b, comp) {\
    __typeof(a) _a = (a), _b =(b);\
    haizei_test_info.total += 1;\
    if(_a comp _b) haizei_test_info.success += 1;\
    else {\
        printf("\n");\
        printf(YELLOW_HL("\t%s:%d: FAILURE\n"), __FILE__, __LINE__);\
        printf(YELLOW_HL("\t\texpect" #a " " #comp " " #b " " "actual : "));\
        printf("\n");\
    }\
    printf(GREEN("[-----------]") #a " " #comp " " #b " ");\
    printf("%s\n", (a) comp (b) ? GREEN_HL("TRUE") : RED_HL("FLASE"));\
}

#define EXPECT_EQ(a, b) EXPECT(a, b, ==)
#define EXPECT_LT(a, b) EXPECT(a, b, <)
#define EXPECT_LE(a, b) EXPECT(a, b, <=)
#define EXPECT_GT(a, b) EXPECT(a, b, >)
#define EXPECT_GE(a, b) EXPECT(a, b, >=)
#define EXPECT_NE(a, b) EXPECT(a, b, !=)

typedef void (*TestFuncT)();

struct Function {
    TestFuncT run;
    const char *str;
    struct LinkNode p;
};


struct FunctionInfo {
    int total, success;
};

extern struct FunctionInfo haizei_test_info;

void add_function(TestFuncT, const char *);
int RUN_ALL_TESTS ();

#endif
