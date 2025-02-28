#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
// #include <bits/stdc++.h>
using namespace std;

// Third distinct maximun number

int solution_1(int arr[], int n)
{
    int first = arr[0];
    int second = INT_MIN;
    int third = INT_MIN;

    if (n < 3)
    {
        return max(arr[0], arr[1]);
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == first)
            continue;

        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] < second)
        {
            third = arr[i];
        }
    }
    return third;
}

int solution_2(int arr[], int n)
{
    set<int> nums(arr, arr + n);

    auto it = nums.rbegin();

    if (n < 2)
    {
        return *nums.rbegin();
    }
    advance(it, 2);

    return *it;
}

int review_1(int arr[], int n)
{
    if(n==1) return arr[0];
    if(n==2) return max(arr[0], arr[1]);
    int first = LONG_MIN;
    int second = LONG_MIN;
    int third = LONG_MIN;

    for (int i = 0; i < n; i++)
    {
        if (first == arr[i] || second == arr[i] || third == arr[i])
            continue;

        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }

    return third == INT_MIN ? first : third;
}

int main()
{
    int n;
    // int numbers[] = {8, 4, 6, 2, 7, 5, 6};
    int numbers[] = {1, 2, -214748364};
    // int numbers[] = {2, 1};
    // cout << solution_1(numbers, sizeof(numbers) / sizeof(numbers[0]));
    cout << endl;
    // cout << solution_2(numbers, sizeof(numbers) / sizeof(numbers[0]));
    // cout << endl;
    // cout << solution_1(numbers, sizeof(numbers) / sizeof(numbers[0]));

    cout << review_1(numbers, sizeof(numbers) / sizeof(numbers[0]));
    cout << endl;
    cout << INT_MIN;
    cout << LONG_MIN;
    return 0;
}