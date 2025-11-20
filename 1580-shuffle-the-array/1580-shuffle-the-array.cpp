class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;

        int start= 0;
        int end = n;

        while(start < n){
            ans.push_back(nums[start]);
            ans.push_back(nums[end]);
            start++;
            end++;
        }
        return ans;
    }
};