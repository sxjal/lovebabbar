#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums{1,2,-3,4,-5,6};

    int start = 0, end = nums.size()-1;

        while(start<=end){
           if(nums[start] < 0){
            start++;
           }
           else swap(nums[start],nums[end--]);
        }

    for(auto v:nums){
        cout<<v<<" ";
    }
    
    return 0;
}


