/*
    print 
        A
        B C
        C D E
        D E F G
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch;
    for(int i=0; i<n; i++)
    {
        ch = 'A' + i;
        for(int j=0; j<i+1; j++)
        {
            cout<<ch++<<" ";
        }
        cout<<"\n";
    }
    return 0;
}