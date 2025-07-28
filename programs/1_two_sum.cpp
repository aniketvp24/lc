class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hmap;

        for (int i = 0; i < nums.size(); i++)
        {
            int x = target - nums[i];

            if (hmap.find(x) != hmap.end())
            {
                return {i, hmap[x]};
            }

            hmap[nums[i]] = i;
        }

        return {};
    }
};