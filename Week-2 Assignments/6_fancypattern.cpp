#include<iostream>

using namespace std;

int main()
{
    int n = 5;
    
    int k = 1;
    for(int i = 0 ; i < 9; i++)
    {
        if(i<n-1){
            for(int j = 0; j<2*i+1; j++)
            {
                if(j%2 == 0){
                    cout<<k;
                    k++;
                }
                else cout<<"*";
            }
        }

        else{
           for(int j = 0; j<2*i+1; j++)
            {
                if(j%2 == 0){
                    cout<<k;
                    k--;
                }
                else cout<<"*";
            }
        }         
        cout<<endl;
    }
    return 0;
}
