int gcd (int x, int y) {
    return x == 0 ? y : gcd(y % x, x);
}

bool hasGroupsSizeX(int* deck, int deckSize) {
    int i = 0, freq[10000] = {0}, hcm = -1;

    while (i < deckSize) 
        freq[deck[i++]]++;

    i = 0;

    while (i < deckSize) {
        if (hcm == -1)
            hcm = freq[deck[i]];
        else
            hcm = gcd(hcm, freq[deck[i]]);
        
        i++;
    }

    return hcm > 1 ? true : false;
}