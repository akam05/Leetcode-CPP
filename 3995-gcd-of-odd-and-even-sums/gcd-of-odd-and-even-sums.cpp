class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if (n == 1) 
        {
            return n;
        }

        int sumOdd = n * (1 + (2 * n) - 1)/2;
        int sumEven = n * (2 + (2 * n)) /2;

        for (int i = sumEven / 2; i > 0; i--)
        {
            if (sumEven % i == 0 && sumOdd % i == 0) {
                return i;
            }
        }
        return 0;
    }
};