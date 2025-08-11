class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int maxind = 0;
        int minind = 0;
        int i;
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[maxind]) {
                maxind = i;
            }
            if(nums[i] < nums[minind]) {
                minind = i;
            }
        }
        if(minind > maxind) swap(minind, maxind);

        int option1 = maxind + 1;
        int option2 = n - minind;
        int option3 = (minind + 1) + (n - maxind);

        return min(option1 , min(option2 , option3));
        

    }
};