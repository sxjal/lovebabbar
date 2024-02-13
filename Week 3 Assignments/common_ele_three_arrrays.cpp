#include<iostream>
#include<vector>
#include <set>

using namespace std;


int solution(int a[],int b[], int c[], int n1,int n2, int n3){
     int flag1 = 0, flag2 = 0;
    set<int> st;
    vector<int> ans;
    int i = 0, j = 0, k = 0;
        while(i<n1 && j < n2 && k<n3){
               
            if(a[i] == b[j] && b[j]== c[k] && a[i] == c[k]){
                st.insert(a[i]);
            }
                
                if(a[i] < b[j]) i++;
                else if(b[j] < c[k]) j++;
                else  k++;
            }
            
            for(auto i:st){
                ans.push_back(i);
            }
            
    return -1;
}
int main()
{
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int size = sizeof(arr)/sizeof(int);

    cout<<solution(arr,arr,arr,2,3,4);

    return 0;
}


