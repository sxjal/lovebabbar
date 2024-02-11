#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n = 0;
    
    cout<<"\n Enter Value: ";
    cin>>n;

 
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    cout<<ans;

    return 0;
}


