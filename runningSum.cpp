#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        
        nums[i] = nums[i] + nums[i - 1];
    }

    return nums;
}

int main()
{
    vector<int> runningSumTest = {1, 2, 3, 4}; 
    vector<int> result =  runningSum(runningSumTest);

    for(int n : result)
        cout << n << " ";
    return 0;
}