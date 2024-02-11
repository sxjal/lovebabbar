#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a{0,1,1,0,1,0,1,0,0};


    int start = 0;
    int end = a.size()-1;

    int i = 0;

    while(i<=end){
        if(a[i] == 0){
            swap(a[i],a[start]);
            i++;
            start++;
        }
        else{
            swap(a[i],a[end]);
            // i++;
            end--;
        }
    }

    for( auto value:a){
        cout<<value<<" ";
    }
    
    return 0;
}


