#include<iostream>

using namespace std;

int main()
{
    int n = 5;
    
    int k = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(i<n){
            for(int j = 0; j<2*i+1; j++,k++){
                if(j%2){
                    cout<<k;
                }
                else cout<<"*";
            }
        }

        else{
            for(int j = 0; j>=n; j++){
                cout<<"*";
            }
        }         
        cout<<endl;
    }
    return 0;
}
