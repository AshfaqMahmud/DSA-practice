/*
 print 
        1234
        1234
        1234
        1234
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<j+1<<" ";
        cout<<"\n";
    }
    return 0;
}