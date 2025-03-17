class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int, vector<int>, greater<int>>first;
        priority_queue<int, vector<int>, greater<int>>second;
        int i=0, j=costs.size()-1;
        while(i<j && i<candidates){
            first.push(costs[i]);
            i++;
        }
        int m=0;
        while(i<=j && m<candidates){
            second.push(costs[j]);
            j--;
            m++;
        }
        // int f=first.top();
        // int s=second.top();
        long long total_cost=0;
        // if(f<=s){
        //     total_cost+=f;
        //     first.pop();
        // }
        // else {
        //     total_cost+=s;
        //     second.pop();
        // }

        while(i<=j && k>0){
               if( first.top()<=second.top()){
               total_cost+=first.top();
               first.pop();
            }
           else {
            total_cost+=second.top();
            second.pop();
           }
            if(first.size()<candidates && i<=j){
                first.push(costs[i]);
                i++;
            }
            if(second.size()<candidates && i<=j){
                second.push(costs[j]);
                j--;
            }
             
           
           k--;
        }

    while(k>0 && !first.empty() && !second.empty()){
         if(first.top()<=second.top()){
            total_cost+=first.top();
            first.pop();
         }
         else{
            total_cost+=second.top();
            second.pop();
         }
        k--;
    }
    while(k>0 && !second.empty()){
        total_cost+=second.top();
        second.pop();
        k--;
    }
    while(k>0 && !first.empty()){
        total_cost+=first.top();
        first.pop();
        k--;
    }
        return total_cost;
    }
};