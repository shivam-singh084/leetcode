class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;  //zero

        int end = nums.size()-1; // two
        int mid = 0; // terversal

        while(mid <= end ){
            if(nums[mid] == 0){
                swap(nums[start], nums[mid]);
                start++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;

            }
            else{
                swap( nums[mid], nums[end]);
                end--;
            }
        }
        
    }
};