class Solution {
public:
    int countCommas(int n) {
        string s = to_string(n);
        if(s.length() < 4){
            return 0;
        }
        return (n-1000)+1;
    }
};