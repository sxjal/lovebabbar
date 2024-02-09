#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int k = n-1;
    for(int i = 0 ; i < 2*n-1; i++)
    {
        if(i < n){
            for(int j = 0; j < i+1; j++){
                cout<<"*";
            }
        }
        else{
            for(int j = 1; j <= k; j++){
                cout<<"*";
            }
            k--;
        }

        cout<<endl;
    }
    return 0;
}
