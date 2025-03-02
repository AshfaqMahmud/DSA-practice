/*
    print
        1 
        2 3 
        3 4 5 
        4 5 6 7
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int tmp = i+1;
        for(int j=0; j<i+1; j++)
        {
            cout<<tmp++<<" ";
        }
        cout<<"\n";
    }

    return 0;
}