class Solution
{
public:
    int findMin(vector<int> &num)
    {
        int low = 0;
        int high = num.size() - 1;

        while (low < high)
        {
            if (num[low] < num[high])
                return num[low];

            int mid = (low + high) / 2;

            if (num[mid] >= num[low])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }

        return num[low];
    }
};