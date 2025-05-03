char* findDifferentBinaryString(char** nums, int ns) {
    char* a = (char*)malloc((ns + 1) * sizeof(char));
    for (int i = 0; i < ns; i++) {
        a[i] = nums[i][i] == '0' ? '1' : '0';
    }
    a[ns] = '\0'; 
    return a;
}