#include <iostream>
#include <vector>
using namespace std;

vector<int> twosum(vector<int>& nums, int target){

    for(int i=0;i<nums.size();i++){

        for(int j=i+1;j<nums.size();j++){

            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }

    return {};
}

int main(){

    int n,target;

    cout<<"enter array size";
    cin>>n;

    vector<int> nums(n);

    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<"enter target";
    cin>>target;

    vector<int> ans=twosum(nums,target);

    cout<<"indexs are";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}