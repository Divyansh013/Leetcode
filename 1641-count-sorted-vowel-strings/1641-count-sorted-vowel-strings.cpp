class Solution {
public:
    int countVowelStrings(int n) {
        int t[n+1][6];
        for(int i=0; i<n+1; i++){
            for(int j=0; j<6; j++){
                if(j==0){
                    t[i][j]=0;
                }
                if(i==0){
                    t[i][j]=1;
                }
            }
        }
        for(int i=1; i<n+1; i++){
            for(int j=1; j<6; j++){
                t[i][j]=t[i-1][j]+t[i][j-1];
            }
        }
        return t[n][5];
    }
};