/*
    print 
        A B C D
        A B C
        A B
        A
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
        for(int j=n; j>i; j--)
        {
            cout<<ch<<" ";
            ch = ch + 1;
        }
        cout<<endl;
    }
    return 0;
}