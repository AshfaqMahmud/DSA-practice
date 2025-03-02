/*
    print 
        A B C D
        A B C D
        A B C D
        A B C D
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char ch = 'A';
        for(int j=0; j<n; j++)
        {
            char tmp = ch + j;
            cout<<tmp<<" ";            // if we write ch+j then it will print integer due to integer promotion
        }
        cout<<"\n";
    }

    return 0;
}