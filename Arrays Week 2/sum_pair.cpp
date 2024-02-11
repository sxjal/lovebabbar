#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a{10,20,9,2};
    
    int sum = 12;

    int flag = 0;
    for(int i = 0; i<a.size(); i++){
        for(int j = i; j <a.size(); j++){
            if(a[i] + a[j] == sum)
            {
                cout<<"Num 1: "<<a[i]<<" Num 2: "<<a[j];
                break;
            }
        }
    }
 
    
    return 0;
}


