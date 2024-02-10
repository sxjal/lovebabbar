#include<iostream>

using namespace std;


void func(int arr[]){
    arr[0] = 4;
    cout<<"inside func "<<arr[0]<<endl;
}
int main()
{
    int arr[] = {10,20,30};

    func(arr);

    cout<<arr[0];
    
    
    return 0;
}
