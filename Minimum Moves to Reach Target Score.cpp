class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        while(target!=1){
            if(maxDoubles==0){
                count+=target;
                count--;
                target=1;
            }
            else if(target%2){
                target--;
                count++;
            }
            else{
                target/=2;
                maxDoubles--;
                count++;
            }
        }
        return count;
    }
};