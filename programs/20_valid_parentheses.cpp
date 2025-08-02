class Solution
{
public:
    bool isValid(string s)
    {
        // if (s.length() % 2 == 1) {
        //     return false;
        // }

        stack<char> pstack;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                pstack.push(s[i]);
            }
            else
            {
                if (pstack.empty())
                {
                    return false;
                }
                else if (s[i] == ')' && pstack.top() != '(')
                {
                    return false;
                }
                else if (s[i] == ']' && pstack.top() != '[')
                {
                    return false;
                }
                else if (s[i] == '}' && pstack.top() != '{')
                {
                    return false;
                }
                else
                {
                    pstack.pop();
                }
            }
        }

        return pstack.empty();
    }
};