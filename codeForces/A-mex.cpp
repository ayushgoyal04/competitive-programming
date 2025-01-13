#include <iostream>
#include <vector>
#include <algorithm>

int minimizeMex(std::vector<int>& arr, int k) {
    // Frequency array (since 0 ≤ ai ≤ 100)
    std::vector<int> freq(101, 0);

    // Calculate frequency of each element
    for (int num : arr) {
        if (num < 101) {
            freq[num]++;
        }
    }

    // Find the initial MEX
    int mex = 0;
    while (mex < 101 && freq[mex] > 0) {
        mex++;
    }

    // Use removals to try to lower the MEX
    int removalsRequired = 0;
    for (int i = 0; i < mex; ++i) {
        removalsRequired += freq[i];
    }

    // If we have enough removals to cover all elements up to MEX
    if (removalsRequired <= k) {
        return mex;
    } else {
        // If not enough removals, the MEX cannot be decreased
        return mex;
    }
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N, k;
        std::cin >> N >> k;
        std::vector<int> arr(N);

        for (int i = 0; i < N; ++i) {
            std::cin >> arr[i];
        }

        int result = minimizeMex(arr, k);
        std::cout << result << std::endl;
    }

    return 0;
}
