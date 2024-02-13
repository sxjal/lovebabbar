#include<iostream>
#include<vector>

using namespace std;


int solution(int arr[], int n){
    int index = arr[0];

    // for(int i = 0; i < n; i++){
    //    index = abs(arr[i]);
    //    arr[index] *= -1;
    // }

    // for(int i = 0; i<n; i++){
    //     if(arr[i] < 0){
    //         return i+1;
    //     }
    // }

    for(int i = 0; i < n; i++){
        index = arr[i] - 1;
        swap(arr[index],arr[i]);
    }

    for(int i = 0; i <n; i++)
    {
        if(arr[i] != i+1){
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,5,3,4,7,7};
    int size = sizeof(arr)/sizeof(int);

    cout<<solution(arr,size);

    return 0;
}


