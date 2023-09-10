//! https://leetcode.com/problems/sqrtx/description/
class Solution
{
public:
    int mySqrt(int x)
    {
        {
            long long int low = 1;
            long long int high = x;
            long long int ans = -1;
            if (x == 0)
            {
                return 0;
            }
            while (low <= high)
            {
                long long int mid = low + (high - low) / 2;
                long long int sqr = mid * mid;
                if (x == sqr)
                {
                    return mid;
                }
                else if (sqr > x)
                {
                    high = mid - 1;
                }
                else
                {
                    ans = mid;
                    low = mid + 1;
                }
            }
            return ans;
        }
    }
};