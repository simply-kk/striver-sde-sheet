class Solution {


//! https://leetcode.com/problems/koko-eating-bananas/

public:
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxi = *max_element(piles.begin(), piles.end());  
        int left = 1, right = maxi;
        int ans = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long hours = 0;
            
            for (int i = 0; i < n; ++i) {
                hours += (piles[i] + mid - 1) / mid;  //* For ceiling 
            }
            
            if (hours > h) {
                left = mid + 1;
            } else {
                ans = mid;
                right = mid - 1;
            }
        }
        
        return ans;
    }
};
