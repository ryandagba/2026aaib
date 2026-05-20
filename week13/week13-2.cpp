// week13-2.cpp   肈: local vs. golbal
#include <stdio.h>
int a = 100, b = 200;/// global办跑计
void fun1()
{
    int b = 80;
    printf("void fun1() a is: %d\n", a);
    printf("void fun1() b is: %d\n", a);
}
void fun2()
{
    b = 30;///эglobal 办跑计 跑 30
}
int main()
{
    int a = 50;///local跋办跑计
    printf("int main() a is: %d\n", a);
    fun1();
    printf("int main() a is: %d\n", a);
    printf("int main() b is: %d\n", b);
}
