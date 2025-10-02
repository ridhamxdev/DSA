#include <iostream>
#include <vector>
#include <algorithm> // for swap

using namespace std;

class Solution {
public:
    // Merge function using Gap Method
    void merge(vector<int>& nums, int start, int mid, int end) {
        int total_len = end - start + 1;
        int gap = (total_len / 2) + (total_len % 2); // Initial gap

        while (gap > 0) {
            int i = start;
            int j = start + gap;

            while (j <= end) {
                if (nums[i] > nums[j]) {
                    swap(nums[i], nums[j]);
                }
                i++;
                j++;
            }

            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2); // Reduce gap
        }
    }

    // Recursive Merge Sort
    void mergeSort(vector<int>& nums, int i, int j) {
        if (i >= j) return;

        int mid = i + (j - i) / 2;
        mergeSort(nums, i, mid);
        mergeSort(nums, mid + 1, j);
        merge(nums, i, mid, j); // Merge sorted halves
    }

    // Main function to sort the array
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};

// Optional main() for testing
int main() {
    vector<int> nums = {5, 2, 3, 1, 4};

    Solution sol;
    vector<int> sorted = sol.sortArray(nums);

    cout << "Sorted Array: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
