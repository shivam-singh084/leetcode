class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        for(int i=0; i<nums.size(); i++){

            for(int j=i+1; j<nums.size() && j<=k+i; j++){
                
                if(nums[i] == nums[j]){

                    if(abs(i-j)<= k){
                        return true;
                    } 
                }
            }
        }
        return false;
    }
};