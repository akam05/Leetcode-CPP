class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) {
            return x;
        }

        long long i = 2;
        while (i * i <= x)
            i = i + 1;
        return i - 1;
    }
};