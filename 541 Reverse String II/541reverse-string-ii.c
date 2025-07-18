void reverse(char *s, int left, int right, int len) 
{
    if (right >= len) right = len - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

char* reverseStr(char* s, int k) 
{
    int len = strlen(s);

    for (int i = 0; i < len; i += 2 * k) {
        int j = i + k - 1;
        reverse(s, i, j, len);
    }

    return s;
}