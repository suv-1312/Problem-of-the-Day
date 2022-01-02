#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void reverse(int arr[], int n, int si, int ei)
{
    int i = si, j = ei;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    //code

    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        int arr[n];
        for (int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }

        reverse(arr, n, 0, d - 1);
        reverse(arr, n, d, n - 1);
        reverse(arr, n, 0, n - 1);

        for (int i = 0 ; i < n ; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}