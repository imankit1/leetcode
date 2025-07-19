class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
   int n=folder.size();
   sort(folder.begin(), folder.end());
    vector<string>ans;

    string temp=folder[0];
    ans.push_back(temp);
    for(int i=1;i<n;i++){
        string curr=folder[i].substr(0, temp.size());

        if(temp==curr && folder[i][temp.size()]=='/'){
         
            continue;
        }
        else{
         temp=folder[i];
         ans.push_back(folder[i]);

        } 
    }
    return ans;
    }
};