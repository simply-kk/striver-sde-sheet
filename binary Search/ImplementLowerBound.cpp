<<<<<<< HEAD
//! https://www.codingninjas.com/studio/problems/lower-bound_8165382?leftPanelTab=1

int lowerBound(vector<int> arr, int n, int x)
{
    int ans = n;

    int low = 0;

    int high = n - 1;

    while (low <= high)

    {

        int mid = (low + high) / 2;

        if (arr[mid] >= x)

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
//! https://www.codingninjas.com/studio/problems/lower-bound_8165382?leftPanelTab=1

int lowerBound(vector<int> arr, int n, int x)
{
    int ans = n;

    int low = 0;

    int high = n - 1;

    while (low <= high)

    {

        int mid = (low + high) / 2;

        if (arr[mid] >= x)

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