# findDuplication
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
 

Constraints:

1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more times.
///////////////////////////////////////////////////////////Nie działa///////////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int rozmiar = sizeof(nums) / sizeof(nums[0]); // Oblicz rozmiar tablicy nums//tablica kończy się -1 zawsze
        for (int i = 0; i < rozmiar; i++) {
            for (int j = i + 1; j < rozmiar; j++) {
                if (nums[i] == nums[j]) {
                    cout << nums[i] << " ";
                    return 0;

                }
            }
        }
        return -1;

    }
};


int main()
{
    Solution solution;
    vector<int>nums;
    
    int n;// rozmiar tablicy(dla testowania)
    cout << "rozmiar tablicy bedzie: ";
    cin >> n;

    cout << "wprowadz taka ilosc elementow do tablicy: " << n << endl;
    for (int i = 0; i < n; i++) {
        int elementy;// zapisywanie elementów do tablicy nums
        cin >> elementy;
        nums.push_back(elementy);//kazdy kolejny element dodajemy do nums
    }
    int duplicate = solution.findDuplicate(nums);//????
   
    if (duplicate != -1) {
        cout << duplicate << endl;
    }
    else {
        cout << "Nie znaleziono zduplikowanej liczby." << endl;
    }

    return 0;
}
