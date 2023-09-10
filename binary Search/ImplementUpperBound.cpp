<<<<<<< HEAD
//! https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383
int upperBound(vector<int> &arr, int x, int n)
{

    int ans = n;

    int low = 0;

    int high = n - 1;

    while (low <= high)

    {

        int mid = (low + high) / 2;

        if (arr[mid] > x)

        {

            ans = mid;

            high = mid - 1;
        }

        else

        {

            low = mid + 1;
        }
    }

    return ans;
=======
//! https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383
int upperBound(vector<int> &arr, int x, int n)
{

    int ans = n;

    int low = 0;

    int high = n - 1;

    while (low <= high)

    {

        int mid = (low + high) / 2;

        if (arr[mid] > x)

        {

            ans = mid;

            high = mid - 1;
        }

        else

        {

            low = mid + 1;
        }
    }

    return ans;
>>>>>>> f12da9d56313378dfa5bd1d6320bfbe5648eae21
}