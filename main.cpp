#include <iostream>
#include<stdlib.h>
#include<string.h>
#include<string.h>

using namespace std;

int myadd(int a,int b){

    printf("func add() do....\n");

    return a+b;

}

typedef int (*MyTypeFuncAdd)(int a,int b);

//函数指针 做函数参数

int MainOp(MyTypeFuncAdd myFuncAdd){

    int c = myFuncAdd(5,6);

    return c;



}

//int (*MyPointerFuncAdd)(int a,int b)

int MainOp2(int(*MyPointerFuncAdd)(int a,int b)){

    int c = MyPointerFuncAdd(5,6);

    return c;



}







//间接调用


int main()
{

    myadd(1,3);

    MyTypeFuncAdd myFuncAdd = myadd;

    myFuncAdd(3,4);

    MainOp2(myadd);

    MainOp(myadd);

    return 0;
}

