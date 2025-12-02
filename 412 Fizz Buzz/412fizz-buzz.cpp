class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        string a = "FizzBuzz";
        string b = "Fizz";
        string c = "Buzz";
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                v.push_back(a);
            }
            else if(i%3==0){
                v.push_back(b);
            }
            else if(i%5==0){
                v.push_back(c);
            }
            else{
                v.push_back(to_string(i));
            }
        }
        return v;
    }
};