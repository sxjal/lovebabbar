#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a{10,20,30,1};
    vector<int> b{1,3,7,30,20};

    vector<int> ans;

    int flag = 0;
    for(int i = 0; i < a.size(); i++){
        flag = 0;
        for(int j = 0; j < b.size(); j++)
        {
            if(a[i] == b[j]){
                ans.push_back(a[i]);
                continue;
            }
        }
         
    }
 
    for(int k = 0; k < ans.size(); k++){
        cout<<ans[k]<<" ";
    }
    return 0;
}


