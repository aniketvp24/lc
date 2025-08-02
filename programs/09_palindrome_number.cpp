class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        long rev = 0;
        int x_copy = x;

        while (x_copy > 0)
        {
            rev = (rev * 10) + (x_copy % 10);
            x_copy = x_copy / 10;
        }

        if (x == rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};