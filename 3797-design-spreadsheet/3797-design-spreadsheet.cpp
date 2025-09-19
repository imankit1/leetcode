class Spreadsheet {
public:
    vector<vector<int>>arr;
    Spreadsheet(int rows) {
       arr.assign(rows, vector<int>(26, 0));
    }
    
    void setCell(string cell, int value) {
        int c=cell[0]-'A';
        int r=stoi(cell.substr(1))-1;
        arr[r][c]=value;
    }
    
    void resetCell(string cell) {
         int c=cell[0]-'A';
        int r=stoi(cell.substr(1))-1;
        arr[r][c]=0;
    }
    
    int getValue(string formula) {
        string s=formula.substr(1);
        int sum=0;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='+'){
                if(isdigit(temp[0])){
                    int val=stoi(temp);
                    sum+=val;
                }
                else{
                    int c=temp[0]-'A';
                    int r=stoi(temp.substr(1))-1;
                     
                    sum+=arr[r][c];
                }
                temp="";
            }
            else temp+=s[i];
        }

         if(isdigit(temp[0])){
                    int val=stoi(temp);
                    sum+=val;
                }
                else{
                    int c=temp[0]-'A';
                    int r=stoi(temp.substr(1))-1;
                    
                    sum+=arr[r][c];
                }

                return sum;

    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */