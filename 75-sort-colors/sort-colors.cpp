class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int white = 0;
        int blue = 0;

        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            if (nums[i] == 0)
            {
                red += 1;
            } else if (nums[i] == 1)
            {
                white += 1;
            } else 
            {
                blue += 1;
            }
        }

        for (int i = 0; i < len; i++)
        {
            if (red > 0)
            {
                nums[i] = 0;
                red -= 1;
            } else if (white > 0)
            {
                nums[i] = 1;
                white -= 1;
            } else 
            {
                nums[i] = 2;
                blue -= 1;
            }
        }
    }
};