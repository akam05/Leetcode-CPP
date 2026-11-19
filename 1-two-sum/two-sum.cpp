class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hm;
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            if (hm.find(target - nums[i]) != hm.end())
                return {i, hm[target - nums[i]]};
            hm[nums[i]] = i;
        }
        return {};
    }
};