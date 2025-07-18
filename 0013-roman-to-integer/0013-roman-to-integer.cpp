class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.length();
        for(int i=0; i<n; i++){
            if(s[i] == 'M')
                ans += 1000;
            else if(s[i] =='C' && s[i+1] == 'M' && i<n-1){
                ans += 900;
                i++;
            }
            else if(s[i] == 'D')
                ans += 500;    
            else if(s[i] =='C' && s[i+1] == 'D' && i<n-1){
                ans += 400;
                i++;
            }    
            else if(s[i] == 'C')
                ans += 100;
            else if(s[i] =='X' && s[i+1] == 'C' && i<n-1){
                ans += 90;
                i++;
            }        
            else if(s[i] == 'L')
                ans += 50;
            else if(s[i] =='X' && s[i+1] == 'L' && i<n-1){
                ans += 40;
                i++;
            }        
            else if(s[i] == 'X')
                ans += 10;
            else if(s[i] =='I' && s[i+1] == 'X' && i<n-1){
                ans += 9;
                i++;
            }        
            else if(s[i] == 'V')
                ans += 5;
            else if(s[i] =='I' && s[i+1] == 'V' && i<n-1){
                ans += 4;
                i++;
            }        
            else if(s[i] == 'I')
                ans += 1;                
        }
        return ans;
    }
};