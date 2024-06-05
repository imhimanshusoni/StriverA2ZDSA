class Solution {
public:
    int reverse(int x) {
        int rn = 0;
        while(x != 0) {
            int remainder = x % 10;
            if (rn > INT_MAX/10 || (rn == INT_MAX/10 && remainder > 7)) return 0;
            if (rn < INT_MIN/10 || (rn == INT_MIN/10 && remainder < -8)) return 0;
            rn = rn * 10 + remainder;
            x /= 10;
        }
        return rn;
    }
};