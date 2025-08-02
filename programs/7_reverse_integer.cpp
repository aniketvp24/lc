class Solution
{
public:
    int reverse(int x)
    {
        int x_rev = 0;

        while (x != 0)
        {
            if (x_rev > INT_MAX / 10 || x_rev < INT_MIN / 10)
            {
                return 0;
            }
            else
            {
                x_rev = (x_rev * 10) + (x % 10);
                x = x / 10;
            }
        }
        return x_rev;
    }
};