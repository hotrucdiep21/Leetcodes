#include <iostream>
#include <vector>

using namespace std;

bool findPaidWithSum(vector<int> v, int n)
{
    int left = 0;
    int right = v.size() - 1;

    while (left < right)
    {
        int sum = v[left] + v[right];

        if (sum == n)
        {
            cout << v[left] << "+" << v[right] << " = " << sum;
            return true;
        }

        if (sum > left)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << "No pair found with sum!" << endl;
    return false;
}

int main()
{
    vector<int> arr = {-2, -4, 6, 8, 10}; // Example increasing array
    int n = 6;                         // Target sum

    findPaidWithSum(arr, n);

    return 0;
}
