class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());

        int curr = 1;
        int ans = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1]+1){
                curr++;
            }
            else if(nums[i] == nums[i-1]){
                continue;
            }else{
                curr = 1;
            }
            ans = max(ans, curr);
        }
        return ans;
    }
};