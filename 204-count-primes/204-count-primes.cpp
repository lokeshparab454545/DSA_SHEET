class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<int>primes(n+1, 1);
        for(int i=2; i<n; i++){
            if(primes[i] == 1){
                cnt++;
                for(int j = 2*i; j<n; j+=i){
                    primes[j] = 0;
                }
            }
        }
        return cnt;
    }
};