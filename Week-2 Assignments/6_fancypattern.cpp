#include<iostream>

using namespace std;

int main()
{
    int n = 4;
    int k = 1;

    for(int i = 0 ; i <= n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            cout<<k<<" ";
            k++;       
        }
        cout<<endl;
    }

    int start = k-n;
    for(int i = 0 ; i < n; i++)
    {
        k = start;
        for(int j = 0; j<=n-i-1; j++)
        {
            cout<<k<<" ";
            k++;
        }
        start = start - (n - i - 1);
        cout<<endl;
    }

    return 0;
}
