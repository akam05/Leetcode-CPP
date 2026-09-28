class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int remainingValue = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            remainingValue ^= nums[i];
        }
        return remainingValue;
    }
};