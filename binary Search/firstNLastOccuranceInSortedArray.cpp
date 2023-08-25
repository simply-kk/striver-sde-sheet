vector<int> searchRange(vector<int> &nums, int target)
{
    int firstOccurrence = -1;
    int lastOccurrence = -1;
    int left = 0;
    int right = nums.size() - 1;
    // for first occurrence
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (target == nums[mid])
        {
            firstOccurrence = mid;
            right = mid - 1;
        }
        else if (target < nums[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    // for last occurrence
    left = 0;
    right = nums.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (target == nums[mid])
        {
            lastOccurrence = mid;
            left = mid + 1;
        }
        else if (target < nums[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return {firstOccurrence, lastOccurrence};
}