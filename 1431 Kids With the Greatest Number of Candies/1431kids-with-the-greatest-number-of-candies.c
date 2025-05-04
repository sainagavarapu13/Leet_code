/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* c, int s, int x, int* rs) {
    *rs = s;
    bool* res = (bool*)malloc(s * sizeof(bool));
    int max = 0;
    for(int i = 0; i < s; i++) {
        if(c[i] > max) max = c[i];
    }
    for(int i = 0; i < s; i++) {
        res[i] = (c[i] + x) >= max;
    }
    
    return res;
}