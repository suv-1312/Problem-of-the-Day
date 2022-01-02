
class Solution {
public:
    long long minTime(long long a[], long long b[], long long n)
    {
        // Your code goes here
        long long first = 0, second = 0;
        for (long long i = 0 ; i < n ; i++)
        {
            if (i % 2 == 0)
            {
                first += a[i];
                second += b[i];
            }
            else
            {
                first += b[i];
                second += a[i];
            }
        }

        return min(first, second);
    }
};
