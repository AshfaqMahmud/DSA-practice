/*
    print
        1 
        2 2 
        3 3 3 
        4 4 4 4
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cout<<a+1<<" ";
        }
        a++;
        cout<<"\n";
    }
    return 0;
}