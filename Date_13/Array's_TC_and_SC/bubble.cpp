// Optimized Bubble Sort
// Time Complexity: O(n^2) worst/average, O(n) best (when array is already sorted)
// Space Complexity: O(1)

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    // Outer loop runs n-1 times (after each pass, the largest element moves to the end)
    for (int i = 0; i < n - 1; i++) {
        swapped = false;  // Reset swap flag for each pass

        // Inner loop: last i elements are already sorted
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // Compare adjacent elements
                swap(arr[j], arr[j + 1]);
                swapped = true;         // Mark that a swap happened
            }
        }

        // If no swaps happened, array is sorted → break early
        if (!swapped)
            break;
    }
}
