#include<iostream>
#include<vector>

using namespace std;


int solution(int arr[], int n){
    

    unordered_map<int,int> hash;

    for(int i = 0; i < n; i++){
        hash[arr[i]]++;

    }

    for(int i = 0; i < n; i++){
        if(hash[arr[i]] > 1){
            return i+1;
        }
    }

    return -1;
}
int main()
{
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int size = sizeof(arr)/sizeof(int);

    cout<<solution(arr,size);

    return 0;
}


