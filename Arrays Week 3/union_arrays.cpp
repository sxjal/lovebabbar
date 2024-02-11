#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a{10,20,30};
    vector<int> b{1,3,7};

    vector<int> ans;

    

    for(int i = 0; i < a.size(); i++){
        ans.push_back(a[i]);
    }

    for(int j = 0; j < b.size(); j++){
          ans.push_back(b[j]);
    }
    

    for(int k = 0; k < ans.size(); k++){
        cout<<ans[k]<<" ";
    }
    return 0;
}


