class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a = digits.size()-1;

        while(1){
            if(digits[a]==9){
                if(a==0){
                    digits[a] = 0;
                    vector<int> v;
                    v.push_back(1);
                    for(int i=0;i<digits.size();i++){
                        v.push_back(digits[i]);
                    }
                    return v;
                }
                digits[a] = 0;
                a--;
            }
            else{
                digits[a] +=1;
                return digits;
                break;
            }
        }
        return digits;
    }
};