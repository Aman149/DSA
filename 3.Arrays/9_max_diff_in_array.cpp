int maxDifference(int arr[], int n) {

    int diff = arr[1] - arr[0], minValue = arr[0];

    for (int i = 1; i <n; i++) {

        diff = max(diff, arr[i] - minValue);
        minValue = min(arr[i], minValue);
    }
    return diff;
}