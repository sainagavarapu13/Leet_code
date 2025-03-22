bool isVowel(char c) {
        if (c=='A' || c=='E' || c=='O' || c=='I' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            return true;
        }
		return false;
}

char* reverseVowels(char* s) {
    int start = 0;
    int end = strlen(s) - 1;

    while (start < end) {
        if(!isVowel(s[start])) {
            start++;
        }
        else if(!isVowel(s[end])) {
            end--;
        }
        else {
        char temp = s[start];
        s[start++] = s[end];
        s[end--] = temp;
        }
    }
    return s;
}