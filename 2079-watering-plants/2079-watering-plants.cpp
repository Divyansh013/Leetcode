class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans=0;
        int c=capacity;
        int n=plants.size();
        for(int i=0; i<n; i++){
            if(capacity>=plants[i]){
                capacity-=plants[i];
                ans++;
            }
            else{
                ans+=i;
                capacity=c;
                ans+=i+1;
                capacity-=plants[i];
            }
        }
        return ans;
    }
};