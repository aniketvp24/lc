class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> lastSeen(128, -1);
        int start = 0, longest = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (lastSeen[s[i]] >= start)
            {
                start = lastSeen[s[i]] + 1;
            }
            lastSeen[s[i]] = i;
            longest = max(longest, i - start + 1);
        }

        return longest;
    }
};
