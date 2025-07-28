class Solution {
public:
    int countHillValley(vector<int>& a) {
         int cnt=0;
    int i;
    vector<int> arr;
    for(int k:a){
       
        if(arr.empty() || arr.back()!=k){
            arr.push_back(k);
        }
    }
    for(i=1;i<arr.size()-1;i++){
           if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]) cnt++;
             else if(arr[i]<arr[i+1]&&arr[i]<arr[i-1]) cnt++;
        
       
    }
    return cnt;
    }
};