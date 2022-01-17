class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        int n=s.size();
        int check=n%k;
        if(!check){
            for(int i=0; i<n; i=i+k){
                string r=s.substr(i,k);
                ans.push_back(r);
            }
            return ans;
        }
        else{
            string temp;
            int q=n/k;
            for(int i=0; i<k*q; i=i+k){
                string r=s.substr(i,k);
                ans.push_back(r);
            }
            for(int j=k*q; j<n; j++){
                temp.push_back(s[j]);
            }
            int t=temp.size();
            k-=t;
            while(k--){
                temp.push_back(fill);
            }
            ans.push_back(temp);
            return ans;
            
        }
    }
};