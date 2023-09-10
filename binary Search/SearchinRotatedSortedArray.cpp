class Solution
{
public:
    // for binary search
    int binary_search(vector<int> &nums, int left, int right, int target)
    {
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int res = -1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int next = (mid + 1) % n;
            int prev = (mid - 1 + n) % n;
            if (nums[mid] <= nums[next] && nums[mid] <= nums[prev])
            {
                res = mid;
                break;
            }
            else if (nums[mid] <= nums[right])
            {
                right = mid - 1;
            }
            else if (nums[mid] >= nums[left])
            {
                left = mid + 1;
            }
        }
        int index1 = binary_search(nums, 0, res - 1, target);
        int index2 = binary_search(nums, res, n - 1, target);
        if (index1 == -1 && index2 == -1)
        {
            return -1;
        }
        else
        {
            return max(index1, index2);
        }
    }
};