/*
    print 
        1 1 1 1
        2 2 2
        3 3
        4
*/
#include<iostream>
using namespace std;
int main()
{
    int n = 4;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
            cout<<i+1<<" ";                 // as i is fixed for inner loop so i should be printed instead of j
        cout<<endl;
    }
    return 0;
}

/*
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
            cout<<j+1<<" ";                 
        cout<<endl;
    }


    for this code the output will be like following:
    1 2 3 4 
    2 3 4 
    3 4 
    4
*/