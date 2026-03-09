class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
         int n = nums.size();
    vector<int> arr;

    for (string s : nums) {
        int val = stoi(s,nullptr, 2);
        arr.push_back(val);
    }

    sort(arr.begin(), arr.end());

    int k = 0;
    for (int num : arr) {
        if (num == k)
            k++;
        else
            break;
    }

    string res = "";
    while(k){
        res+=(k%2)+'0';
        k/=2;
    }
    while(res.size()!=n){
        res+='0';
    }
    reverse(res.begin(),res.end());
    return res;
    }
};