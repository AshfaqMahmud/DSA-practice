/*
    print for n = 3
        A B C
        D E F
        G H I
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    char ch = 'A';
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<ch++<<" ";
        }
        cout<<"\n";
    }
    return 0;
}