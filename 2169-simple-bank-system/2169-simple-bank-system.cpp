class Bank {
public:
vector<long long>ds;
    Bank(vector<long long>& balance) {
        ds=balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(account1 >ds.size() || account2> ds.size()) return false;
        long long first=ds[account1-1];
        long long second=ds[account2-1];
        if(first>=money){
            ds[account1-1]-=money;
            ds[account2-1]+=money;
            return true;
        }
        else return false;
    }
    
    bool deposit(int account, long long money) {
        if(account>ds.size()) return false;
         long first=ds[account-1];
         ds[account-1]=first+money;
         return true;
    }
    
    bool withdraw(int account, long long money) {
        if(account>ds.size()) return false;
        if(ds[account-1]<money) return false;

        ds[account-1]-=money;
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