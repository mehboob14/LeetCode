class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result;
        unordered_set set1(nums1.begin(),nums1.end());

        for(int i = 0; i < nums2.size();i++){
            if(set1.find(nums2[i]) != set1.end()){
                result.insert(nums2[i]);
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};