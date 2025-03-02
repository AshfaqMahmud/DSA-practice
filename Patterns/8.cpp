/*
    print continuous /\/\/\/\
*/

#include<iostream>
using namespace std;
int main()
{
    printf("......");
    while(1)
    {
        printf("%c",'\\');
        printf("\b");
        printf("%c",'/');
        printf("\b");
    }
    return 0;
}