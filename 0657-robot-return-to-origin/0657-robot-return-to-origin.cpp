class Solution {
public:
    bool judgeCircle(string moves) {
        //  stack<char>st;
        //  for(int i = 0;i < moves.size();i++){
        //     if(!st.empty() && st.top() == 'U' && moves[i] == 'D')st.pop();
        //     else if(!st.empty() && st.top() == 'D' && moves[i] == 'U')st.pop();
        //     else if(!st.empty() && st.top()=='L' && moves[i]=='R')st.pop();
        //     else if(!st.empty() && st.top() == 'R' && moves[i] == 'L')st.pop();

        //      else st.push(moves[i]);
        //  }

        //  if(st.size()==0) return true;
        //  return false;


    int r_count=0, l_count=0, u_count=0, d_count=0;

    for(auto i: moves){
        if(i == 'U') u_count++;
        else if(i == 'D') d_count++;
        else if(i == 'R') r_count++;
        else l_count++;
    }

    if(u_count == d_count && l_count == r_count) return true;
    else return false;
    }
};