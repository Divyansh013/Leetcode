class Solution {
public:
    int getMaximumGenerated(int n) {
        int nums[n+1];
        if(n==0){
            return 0;
        }
        nums[0]=0;
        nums[1]=1;
        for(int i=1; i<n+1; i++){
            int t=2*i;
            int u=2*i+1;
            if(t<n+1){
                nums[t]=nums[i];
            }
            if(u<n+1){
                nums[u]=nums[i]+nums[i+1];
            }
        }
        int ans=-1;
        for(int i=0; i<n+1; i++){
            ans=max(ans,nums[i]);
        }
        return ans;
    }
};