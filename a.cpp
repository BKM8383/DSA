#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<queue>
using namespace std;


class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return arr[0];
        if(n==2) return arr[0]+arr[1]+min(arr[0],arr[1]);
        int sum=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                vector<int>a;
                int temp=i;
                int temp1=j;

                while(temp-->-1){
                if(i<=n-j-1){
                    a.push_back(arr[temp1++]);
                }
                else{
                    break;
                }
                for(int k=0;k<a.size();k++){
                    cout<<a[k]<<" ";
                }
                cout<<endl;
                sum+=*min_element(a.begin(),a.end());
            }
        }
    }
        return sum;
    }
};

int main() {
    Solution s1;
    vector<int>a={1,2,3,4};
    s1.sumSubarrayMins(a);
    
}






                for(int k=0;k<a.size();k++){
                    cout<<a[k];
                }
                cout<<endl;