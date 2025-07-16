double findMaxAverage(int* nums, int numsSize, int k) {
    double sum = 0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    double maxAvg = sum / k;
    for (int i = k; i < numsSize; i++) {
        sum += nums[i] - nums[i - k];
        double currAvg = sum / k;
        if (currAvg > maxAvg) {
            maxAvg = currAvg;
        }
    }

    return maxAvg;
}
