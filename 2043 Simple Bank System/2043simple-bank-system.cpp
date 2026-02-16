class Bank {
public:
    vector<long long>b;
    Bank(vector<long long>& bal) {
        for(int i=0;i<bal.size();i++){
            b.push_back(bal[i]);
        }
    }
    
    bool transfer(int a, int B, long long money) {
         if(a < 1 || a > b.size() || B < 1 || B > b.size())
            return false;
        if(b[a-1] >= money){
            b[a-1]-=money;
            b[B-1]+=money;
            return true;
        }
        return false;
    }
    
    bool deposit(int account, long long money) {
        if(account < 1 || account > b.size()) return false;
        b[account-1]+=money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(account < 1 || account > b.size()) return false;
        if(b[account-1] < money) return false;
        b[account-1]=b[account-1]-money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */