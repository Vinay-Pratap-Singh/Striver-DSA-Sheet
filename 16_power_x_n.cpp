// leetcode solution
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        
        if(n<0){
            n = abs(n);
            x = 1/x;
        }
        
        if(n%2==0){
            return myPow(x*x, n/2);
        }
        else{
            return x*myPow(x*x, n/2);
        }
    }
};

// codestudio solution
int modularExponentiation(int x, int n, int m) {
	if(n==0){
        return 1;
    }
    long haf=modularExponentiation(x,n/2,m);
    if(n%2==0){
        return (int)((haf*haf)%m);
    }else{
        return (int)(((haf*haf)%m)*x%m)%m;
    }
}