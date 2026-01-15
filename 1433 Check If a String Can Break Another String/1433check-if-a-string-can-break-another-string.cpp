class Solution {
    public:
        bool checkIfCanBreak(string s1, string s2) {
                sort(s1.begin(),s1.end());
                        sort(s2.begin(),s2.end());
                                int a = true,b = true;
                                        for(int i=0;i<s1.length();i++){
                                                    if(a!=false && s1[i]<s2[i]) a = false;
                                                                if(b!=false && s1[i]>s2[i]) b = false;
                                                                        }
                                                                                return a || b;
                                                                                    }
                                                                                    };