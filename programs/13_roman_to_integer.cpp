class Solution
{
public:
    int romanToInt(string s)
    {
        int result = 0;
        unordered_map<char, int> hmap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        for (int i = 0; i < s.length(); i++)
        {
            int curr = hmap[s[i]];
            int next = (i + 1 < s.length()) ? hmap[s[i + 1]] : 0;

            if (curr < next)
            {
                result -= curr;
            }
            else
            {
                result += curr;
            }
        }
        return result;
    }
};