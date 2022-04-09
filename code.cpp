#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        long long int w=nums[0],v=1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==int(w))v++;
            else v--;
            if(v==0){
                w=nums[i];
                v=1;
            }
        }
        return w;
    }
};