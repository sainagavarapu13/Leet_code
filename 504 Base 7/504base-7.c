char* convertToBase7(int num) {
    char* ch = (char*)malloc(35*sizeof(char));
    if (num == 0) {
        ch[0] = '0';
        ch[1] = '\0';
        return ch;
    }
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }
    int idx = 0;
    while (num) {
        ch[idx++] = '0' + (num % 7);
        num /= 7;
    }

    if (isNegative) {
        ch[idx++] = '-';
    }

    ch[idx] = '\0';
    for (int i = 0, j = idx - 1; i < j; i++, j--) {
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
    }

    return ch;
}