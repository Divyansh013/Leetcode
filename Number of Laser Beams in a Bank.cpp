class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>v;
        int m=bank.size();
        int n=bank[0].size();
        for(int i=0; i<m; i++){
            
                int temp=count(bank[i].begin(),bank[i].end(),'1');
                if(temp>0){
                    v.push_back(temp);
                }
            
        }
        int sum=0;
        int x=v.size();
        for(int k=0; k<x-1; k++){
            int prod=v[k]*v[k+1];
            sum+=prod;
        }
        return sum;
    }
};