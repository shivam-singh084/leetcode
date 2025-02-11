class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int l = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int r = total-l-nums[i];
            if(l == r )
            return i;
            l = l + nums[i];
        }
        return -1;
    }
};