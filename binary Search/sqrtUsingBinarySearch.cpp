<<<<<<< HEAD
//! https://www.codingninjas.com/studio/problems/square-root-integral_893351?leftPanelTab=0%3Futm_source%3Dstriver
int floorSqrt(int n)
{
    int start = 1;
    int end = n;
    int ans = -1;
    while(start <= end){
        long long mid = start + (end-start)/2;
        long long value = mid*mid;
        if(value <= n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
=======
//! https://www.codingninjas.com/studio/problems/square-root-integral_893351?leftPanelTab=0%3Futm_source%3Dstriver
int floorSqrt(int n)
{
    int start = 1;
    int end = n;
    int ans = -1;
    while(start <= end){
        long long mid = start + (end-start)/2;
        long long value = mid*mid;
        if(value <= n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
>>>>>>> f12da9d56313378dfa5bd1d6320bfbe5648eae21
