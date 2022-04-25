class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1;
        int n=s.size();
        int count=1;
        for(int i=0; i<n; i++){
           if(s[i]==' '){
               count++;
           } 
        }
        if(count==k){
            s1=s;
            return s1;
        }
        else{
            count=1;
            
            for(int i=0; i<n; i++){
                if(s[i]==' '){
                    count++;
                }
                if(count<=k){
                s1.push_back(s[i]);
                }
            }
        
            return s1;
        }
    }
};