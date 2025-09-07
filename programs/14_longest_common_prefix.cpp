class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        string first = strs[0], last = strs[strs.size() - 1];
        int i;

        for (i = 0; i < first.length(); i++)
        {
            if (first[i] == last[i])
            {
                continue;
            }
            else
            {
                return first.substr(0, i);
            }
        }

        return first.substr(0, i);
    }
};