class Solution {

//! https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/description/
public:
 int findMin(vector<int>& nums) {
    int N = nums.size();
    int left = 0;
    int right = N - 1;

    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] > nums[right]) {
            left = mid+1;
        }
        else if (nums[mid] < nums[right]) {
            right = mid;
        }
        else {
            right--;
        }
    }
    
    return nums[left];  
}

};