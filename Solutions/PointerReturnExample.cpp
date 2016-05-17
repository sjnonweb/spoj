#include <iostream>

// Example program to return pointer of an array from the called function to calling function.

using namespace std;

int* pointerReturn()
{
    int x[2]={10,20}, *pointer;
    pointer=&x[0];
    return pointer;

}

int main()
{
    int *pp;
    pp=pointerReturn();
    cout<<(*(pp+1));
    return 0;
}
