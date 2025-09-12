int counts(string s)
{
     int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e'|| s[i] =='i' ||s[i]=='o'||s[i]=='u')
            {
                count++;
            }
        }
        return count;
}class Solution {
public:
    bool doesAliceWin(string s) {
        int n = s.size();
        if(n==0)
        {
            return false;
        }
        int count = counts(s);
        if(count==0)
        {
            return false;
        }
      return true;
    }
};