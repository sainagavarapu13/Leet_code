class Solution {
public:
    int maxDistinctElements(vector<int>& a, int k) {
        set<int> st;
        int prev = INT_MIN;   // changed
        sort(a.begin(),a.end());

        for(int i=0;i<a.size();i++){
            int left = a[i]-k;
            int right = a[i]+k;

            if(left > prev){
                st.insert(left);
                prev = left;
            }
            else{
                if(prev+1 <= right){ 
                    st.insert(prev+1);
                    prev += 1;
                }
            }
        }

        return st.size();
    }
};