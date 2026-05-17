class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        
        int n = arr.size();

        queue<int>q;

        vector<int>visited(n, 0);

        q.push(start);

        if(arr[start] == 0) return true;
        visited[start] = 1;

        while(!q.empty()){
            int idx = q.front();
            q.pop();

            if(arr[idx] == 0) return true;
            if(idx + arr[idx] < n && visited[idx + arr[idx]] != 1) {
            q.push(idx + arr[idx]);
            visited[idx + arr[idx]] = 1;

            }

                   if(idx - arr[idx] >=0 && visited[idx - arr[idx]] != 1) {
                   q.push(idx - arr[idx]);
                   visited[idx - arr[idx]]= 1;

                   }

        }

        return false;
    }
};