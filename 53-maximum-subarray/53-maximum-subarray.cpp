class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int c=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            c+=nums[i];
            ans=max(c,ans);
            if(c<0){
                c=0;
            }
        }
        return ans;
    }
};