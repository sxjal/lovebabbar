#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n = 0;
    
    cout<<"\n Enter Value: ";
    cin>>n;

    vector<int> arr;


    arr.push_back(10);
    arr.push_back(20);

    cout<<arr[0];
    cout<<arr[1];
    // cout<<arr[2];
    
    cout<<"\n size: "<<arr.size();
    cout<<"\n Capacity: "<<arr.capacity();
    
    arr.pop_back();
    cout<<"\n size: "<<arr.size();
    cout<<"\n Capacity: "<<arr.capacity();


    
    return 0;
}
