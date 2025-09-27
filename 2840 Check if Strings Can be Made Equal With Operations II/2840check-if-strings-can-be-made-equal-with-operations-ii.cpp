class Solution {
public:
    bool checkStrings(string a, string b) {
        map<char , int> eve,od;
        for( int i=0;i<a.size();i++){
            if( i%2==0) eve[a[i]]++;
            else od[a[i]]++;
        }
        for( int i=0;i<b.size();i++)
        {
            if( i%2==0 && eve[b[i]]<=0){
                    return 0;
            } if( i%2==1 && od[b[i]]<=0){
                    return 0;
            }if( i%2==0 && eve[b[i]]>0){
                    eve[b[i]]--;
            } if( i%2==1 && od[b[i]]>0){
                    od[b[i]]--;
            }

        }
        return 1;
    }
};