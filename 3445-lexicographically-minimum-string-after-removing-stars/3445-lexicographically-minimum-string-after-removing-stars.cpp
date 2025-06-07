class Solution {
public:
typedef pair<char, int>P;

    struct comp{

        bool operator()(P &p1, P&p2){
            if(p1.first==p2.first) return p1.second<p2.second;
            return p1.first>p2.first;
        }

    };
    string clearStars(string s) {
        //priority queue

        priority_queue<P, vector<P>, comp>pq;
         

        for(int i=0;i<s.size();i++){//O(n)
            if(s[i]=='*') {
                int idx=pq.top().second;  
                pq.pop();
                s[idx]='*';
            }
            else pq.push({s[i], i});  //O(log(n))
        }

        
        string ans="";
        for(int i=0;i<s.size();i++){ //O(n)
             if(s[i]!='*') ans+=s[i];
        }
        return ans;
    }
};
