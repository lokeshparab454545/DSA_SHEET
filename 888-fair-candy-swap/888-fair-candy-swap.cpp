class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum1 = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sum2 = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        int diff = (sum1-sum2)/2;
        unordered_set<int>s;
        for(auto it: aliceSizes){
            s.insert(it);
        }
        for(auto it: bobSizes){
            if(s.count(it+diff)){
                return {it+diff, it};
            }
        }
        return {};
    }
};