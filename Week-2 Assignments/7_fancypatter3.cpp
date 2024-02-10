#include<iostream>

using namespace std;

int main()
{
    int n = 5;
  
    //growing phase
    for(int i = 0; i < 2*n-1 ; i++){
        for(int j = 0; j < i; j++){
                cout<<j+1<<" ";
        }
        for(int j = i; j >= 0; j--){
            cout<<j+1<<" ";
        }
        cout<<endl;     
    }


    return 0;
}
