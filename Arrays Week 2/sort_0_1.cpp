#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a{0,1,1,0,1,0,1,0,0};


    int start = 0;
    int end = a.size()-1;

    for(int value = 0; value<a.size(); value++){
        if(a[value] == 1){
            swap(a[value],a[end--]);
            continue;
        }
        else if(a[value] == 0){
            swap(a[value],a[start--]);
            continue;
        }
       
    }

    for( auto value:a){
        cout<<value<<" ";
    }
    
    return 0;
}


