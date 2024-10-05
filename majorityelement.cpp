class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n =  nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        int ocurance = (n/3)+1;
        for(int i =   0;i<n;i++){
            mp[nums[i]]++;

            if(mp[nums[i]] == ocurance){
                ans.push_back(nums[i]);
            }
            
            if(ans.size() == 2){
                break;
            }
        }
        return ans;
    }
};