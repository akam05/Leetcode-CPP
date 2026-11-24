class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int right = 0;
        while(right < nums.size()) {
            if (nums[right] != 0) {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
        
        /*unordered_map<int, int> hm;
        int j = 0;
        int zero = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zero++;
            } else {
                hm[j] = nums[i];
                j++;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (j > 0) 
                nums[i] = hm[i];
            else 
                nums[i] = 0;
            j--;
        }
        */
    }
};