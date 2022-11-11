class Solution {
public:
   
    string isSumOfTwo(int N){
        for(int i=2; i<=N/2;i++){       // find the first prime number and then subtract it with the number N that is given and check if the (N-i) number is prime or not
                                        // if number is prime then we have our answer
            if(prime(i)&&prime(N-i)){
                return "Yes";
            }
        }
        return "No";
    }
    
     bool prime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
};
