// #include <iostream>
// #include <set>
// #include <vector>

// using namespace std;

// int removeDuplicates(vector<int> nums)
// {
//     int first = 1;
//     for (int second = 1; second < nums.size(); second++)
//     {
//         if(nums[second] != nums[first - 1])
//         {
//             nums[first] = nums[second];
//             cout  << nums[first] << " ";
//             first++;
//         }
//     }
//     return first;
// }
// int main()
// {
//     vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
//     cout << removeDuplicates(nums);

//     return 0;
// }

#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int> nums) {
	int n = nums.size();
	if(n == 0 || n == 1) return 0;
	
	int first = 1, second = 1;
	while(second < n) {
		if(nums[second] != nums[first - 1]) {
			nums[first] = nums[second];
			first++;
		} else {
			second++;
		}
	}
    return first;
}
int main() {
	vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
	cout << removeDuplicates(nums);
	return 0;
}