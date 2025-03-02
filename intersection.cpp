#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    set<int> nums;
    set<int> result;

    for (int n : nums1)
    {
        nums.insert(n);
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        if (nums.find(nums2[i]) != nums.end())
        {
            result.insert(nums2[i]);
        }
    }

    return vector<int>(result.begin(), result.end());
}

vector<int> intersection2(vector<int> &nums1, vector<int> &nums2) {
    set<int> nums;
    vector<int> result;
    for(int n: nums1)
        nums.insert(n);

    for (int i = 0; i < nums2.size(); i++)
    {
        if (nums.find(nums2[i]) != nums.end())
        {
            result.push_back(nums2[i]);
            nums.erase(nums2[i]);
        }
        
    }

    return result;
    
}

vector<int> intersectionReview(vector<int>& nums1, vector<int>& nums2) {
    set<int> nums;
    vector<int> result;
    
    for(int num: nums1) {
        nums.insert(num);
    }
    for(int i = 0; i < nums2.size(); i++) {
        if(nums.find(nums2[i]) != nums.end()) {
            result.push_back(nums2[i]);
            nums.erase(nums2[i]);
        }	 
    }
    return result;
}
int main()
{
    vector<int> nums1 = {4, 9, 5, 8};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    vector<int> result = intersectionReview(nums1, nums2);

    for (int n : result)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}