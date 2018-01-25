/* 函数内声明一个局部变量，并且加上static关键字，当函数调用结束后，该变量并不会被销毁依然存在,如何通过程序证明之*/

#include <stdio.h>

void func1(void) 
{
    static int a = 100;
    a++;
    printf("%d\n",a);
}

int main(void)
{
    func1();
    func1();
    func1();
}

/*结论
声明一个变量，给我的感觉就是，让系统为该变量分配内存。
在局部变量用static声明之后，告诉系统，这个变量只分配一次内存，以后每次调用，不用再分配内存。
*/