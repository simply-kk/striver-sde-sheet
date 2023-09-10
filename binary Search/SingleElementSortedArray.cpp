<<<<<<< HEAD
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n-1;

        while(left < right){
            int mid = left + (right - left)/2;
            if(mid % 2 != 0) mid--;

            if(nums[mid] != nums[mid + 1]) right = mid;
            else left = mid + 2; 
        }
        return nums[left];
    }
=======
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n-1;

        while(left < right){
            int mid = left + (right - left)/2;
            if(mid % 2 != 0) mid--;

            if(nums[mid] != nums[mid + 1]) right = mid;
            else left = mid + 2; 
        }
        return nums[left];
    }
>>>>>>> f12da9d56313378dfa5bd1d6320bfbe5648eae21
};