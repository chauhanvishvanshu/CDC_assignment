// Selection Sort Algorithm
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// In-place sorting (no extra memory used)

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    // Outer loop runs n-1 times because after n-1 passes, the last element is automatically sorted
    for (int i = 0; i < n - 1; i++) {
        int min = i;  // Assume the current index has the minimum value

        // Inner loop to find the index of the smallest element in the remaining unsorted part
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[min])  // If we find a smaller element
                min = j;             // Update the index of the minimum element
        }

        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[i], arr[min]);
    }
}


// Optimized Selection Sort
// Starts inner loop from i+1 to avoid comparing arr[i] with itself

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // Assume the current index has the minimum value

        // Find the smallest element in the remaining unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])  // If a smaller element is found
                minIndex = j;            // Update the index of the minimum element
        }

        // Swap the found minimum with the first element of the unsorted portion
        swap(arr[i], arr[minIndex]);
    }
}
