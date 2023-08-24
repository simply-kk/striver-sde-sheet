class Solution {
public:
int searchInsert(vector<int>& nums, int target) {
    int ans = nums.size(); 
    int high = ans - 1;
    int low = 0;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid; 
        } else if (nums[mid] > target) {
            ans = mid;  
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return ans; 
}

};