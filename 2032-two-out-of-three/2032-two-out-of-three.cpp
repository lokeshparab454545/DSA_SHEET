class Solution {
public:
    vector<int>twoPointer(vector<int>a, vector<int>b){
        vector<int>v;
        int i = 0, j = 0;
        while(i<a.size() && j<b.size()){
            if(a[i] == b[j]){
                v.push_back(a[i]);
                i++; j++;
            }
            else if(a[i] < b[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return v;
    }
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        set<int>st;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        sort(nums3.begin(), nums3.end());
        vector<int>ans1 = twoPointer(nums1, nums2);
        vector<int>ans2 = twoPointer(nums2, nums3);
        vector<int>ans3 = twoPointer(nums3, nums1);
        for(auto it: ans1){
            st.insert(it);
        }
        for(auto it: ans2){
            st.insert(it);
        }
        for(auto it: ans3){
            st.insert(it);
        }
        for(auto it: st){
            ans.push_back(it);
        }
        return ans;
    }
};