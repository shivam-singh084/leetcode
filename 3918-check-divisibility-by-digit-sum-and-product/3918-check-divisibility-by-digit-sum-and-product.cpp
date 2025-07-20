class Solution {
public:
    bool checkDivisibility(int n) {
        int origin = n;
        int sum = 0;
        int product = 1;

        while(n > 0){
            int digit = n % 10;
            sum = sum + digit;
            product = product * digit;
            n = n/10;
        }
        int total = sum + product;
        return (origin % total == 0);
    }
};