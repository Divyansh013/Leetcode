class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[n-1];
        for(int i=1; i<n/2; i++){
            int temp=nums[i]+nums[n-i-1];
            if(temp>ans){
                ans=temp;
            }
        }
        return ans;
    }
};