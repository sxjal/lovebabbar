#include<iostream>

using namespace std;

int main()
{
    int n = 10;
    int k = 2;

    int mask = 1<<k;
    mask = n|mask;
    cout<<mask;
    
    return 0;
}
