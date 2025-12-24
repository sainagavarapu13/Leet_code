class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(),capacity.rend());
        long long a = accumulate(apple.begin(),apple.end(),0),c=0;
        int b = 0;
        if(a==0) return 0;
        for(int i=0;i<capacity.size();i++){
            c+=capacity[i];
            b++;
            if(c>=a){
                return b;
            }
        }
        return b;
    }
};