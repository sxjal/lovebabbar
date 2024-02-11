#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a{10,20,30,40,50};
    
    int sum = 80;

    int flag = 0;
    for(int i = 0; i<a.size(); i++){
        for(int j = i; j <a.size(); j++){
            for(int k = j; k<a.size(); k++){
            if(a[i] + a[j] + a[k] == sum)
            {
                cout<<"Num 1: "<<a[i]<<" Num 2: "<<a[j]<<" Num 3: "<<a[k]<<endl;
                break;
            }
            }
        }
    }
 
    
    return 0;
}


