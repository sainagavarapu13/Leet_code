class Solution {
public:
    char f(char a) {
    if (a >= 'a' && a <= 'z')
        return 'z' - (a - 'a');
    else
        return '9' - (a - '0');
}
    int mirrorFrequency(string a) {
        unordered_map<char, int> b;

    for (char c : a)
        b[c]++;

    unordered_set<char> c;
    int d = 0;

    for (auto e : b) {
        char f1 = e.first;
        if (c.count(f1)) continue;

        char g = f(f1);

        int h = b[f1];
        int i = b.count(g) ? b[g] : 0;

        d += abs(h - i);

        c.insert(f1);
        c.insert(g);
    }

  
    return d;
    }
};