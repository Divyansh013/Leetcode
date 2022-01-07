class Solution {
public:
    bool checkString(string s) {
        string check;
        check=s;
        sort(check.begin(),check.end());
        if(s==check){
            return true;
        }
        else{
            return false;
        }
    }
};