class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int s = 0, e = n-1;
        char ans = '#';
        while(s<=e){
            int m = s + (e-s)/2;
            if(letters[m] > target){
                ans = letters[m];
                e = m-1;
            }
            else{
                s = m+1;
            }
        }
        if(ans == '#'){
            return letters[0];
        }
        return ans;
    }
};