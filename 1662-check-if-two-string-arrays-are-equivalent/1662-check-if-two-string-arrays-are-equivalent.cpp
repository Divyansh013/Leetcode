class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        bool ans;
        string s=" ";
        string s1=" ";
        int n=word1.size();
        int m=word2.size();
        for(int i=0; i<n; i++){
            s=s+word1[i];
        }
        for(int j=0; j<m; j++){
            s1=s1+word2[j];
        }
        if(s==s1){
            return true;
        }
        else{
            return false;
        }
    }
};