class Solution {
public:
    bool asteroidsDestroyed(long long int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int n=asteroids.size();
        bool flag=true;
        for(int i=0; i<n; i++){
            if(mass>=asteroids[i]){
                mass+=asteroids[i];
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag){
            return true;
        }
        else{
            return false;
        }
    }
};