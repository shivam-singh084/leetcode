class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n = nums.size();
        set<long long> s;
        for (int i = 0; i < n; i++) {
            if (i > indexDiff) {
                s.erase(nums[i - indexDiff - 1]);
            }
            auto a = s.lower_bound((nums[i]) - valueDiff);
            if (a != s.end() && ((*a) - nums[i]) <= valueDiff) {
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};