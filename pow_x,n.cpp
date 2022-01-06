double myPower(double x, long int n){
        if(n == 0){
            return 1;
        }
        if(x == 1){
            return 1;
        }
        
        double half = myPower(x, n / 2);
        double ans = half * half;
        
        if(n & 1){
            ans = ans * x;
        }
        
        return ans;
    }
    
    double myPow(double x, long int n) {
        double finalAns;
        if(n < 0){
            n = -n;
            finalAns = 1 / myPower(x, n);
        }
        else{
            finalAns = myPower(x, n);
        }
        
        return finalAns;
    }