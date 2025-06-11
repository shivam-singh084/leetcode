class Solution {
public:
    int distributeCandies(vector<int>& can) {
        sort(can.begin(),can.end());
        int n=can.size(),count=1;
       for(int i=0;i<n-1;i++){
        if(can[i]==can[i+1]){
            continue;
        }else{
            count++;
        }
       } 
       int total=n/2;
       if(count<=total) {return count;
       }else{
        return total;
       }
     return 0;
    }
};