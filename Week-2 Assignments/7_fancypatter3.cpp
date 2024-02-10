#include<iostream>

using namespace std;

int main()
{
    int n = 3;
  
    for(int i = 0; i < 2*n-1 ; i++){
        if( i <= (2*n-1)/2){
            for(int j = 0; j < i; j++){
                 cout<<j+1<<" ";
            }
            for(int j = i; j >= 0; j--){
                cout<<j+1<<" ";
            }
            cout<<endl;
        }
        else{
            // for(){

            // }
        }
    }
    return 0;
}
