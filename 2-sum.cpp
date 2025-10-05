class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int>m;
     for(int i=0;i<nums.size();i++){
        int a=nums[i];
        int r=target-a;
        if(m.find(r)!=m.end()) return {i,m[r]};
        m[a]=i;
     }
     return {0,0};
    }
};
