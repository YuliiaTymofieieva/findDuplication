// trywithclass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int rozmiar = nums.size();//sizeof(nums) / sizeof(nums[0]); // Oblicz rozmiar tablicy nums//tablica kończy się -1 zawsze
        for (int i = 0; i < rozmiar; i++) {
            for (int j = i + 1; j < rozmiar; j++) {
                if (nums[i] == nums[j]) {
                    //cout << nums[i] << " ";
                    return nums[i];

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

    cout << "napisz taka ilosc elementow do tablicy: " << n << endl;
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
