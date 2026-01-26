class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> m;
        int max = 100005;
        for(int i=1;i<arr.size();i++){
            int a = abs(arr[i]-arr[i-1]);
            if(max>a){
                max = a;
            }
        }
        int a = 0;
        for(int i=1;i<arr.size();i++){
            int a = abs(arr[i]-arr[i-1]);
            if(max==a){
                vector<int> v(2);
                v[0] = arr[i-1];
                v[1] = arr[i];
                m.push_back(v);
            }
        }
        return m;
    }
};