#include<iostream>

using namespace std;

int main()
{
    int n = 3;
    
    cout<<"*"<<endl;
    //growing phase
    for(int i = 0; i < n ; i++){
        cout<<"* ";
        for(int j = 0; j < i; j++){
                cout<<j+1<<" ";
        }
        for(int j = i; j >= 0; j--){
            cout<<j+1<<" ";
        }
        cout<<"*";
        cout<<endl;     
    }

    for(int i = n-1; i>0; i--){
        cout<<"* ";
        for(int j = 0; j < i-1; j++){
                cout<<j+1<<" ";
        }
        for(int j = i-1; j >= 0; j--){
            cout<<j+1<<" ";
        }
        cout<<"*";
        cout<<endl;     
    }
    cout<<"*";
    return 0;
}
