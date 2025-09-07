class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int currLen = 0;

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ' ' && currLen > 0)
                return currLen++;
            else if (s[i] != ' ')
                currLen++;
        }

        return currLen;
    }
};