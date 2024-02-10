#include<iostream>

using namespace std;

int main()
{
    int arr[6];

    for(int i = 0 ; i<6; i++){
        cin>>arr[i];
    }
    
    int pointer = 5;
    for(int i = 0; i< 6; i++)
    {
        //cout<<arr[i]<<" "<<arr[pointer--]<<endl;
       
        int temp = arr[i];
        arr[i] = arr[pointer];
        arr[pointer] = temp;
        pointer -= 1;

        if(i>pointer || i == pointer) break;
    }

    for(int i = 0 ; i<6; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
