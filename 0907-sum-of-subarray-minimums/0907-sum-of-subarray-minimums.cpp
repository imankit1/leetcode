class Solution {
public:
    int mod=1e9+7;
    vector<int>pSE(vector<int>& arr){
        int n=arr.size();
        stack<int>st;
        st.push(-1);
        vector<int>result(n, -1);
        for(int i=0;i<n;i++){
            while(st.top()!=-1 && arr[st.top()]>arr[i]) st.pop();
            
            result[i]=st.top();
            st.push(i);
        }
        
        return result;
    }
vector<int>nSE(vector<int>& arr){
      stack<int>st;
      int n=arr.size();
      vector<int>result(n);
      for(int i=n-1;i>=0;i--){
          while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
          
          result[i]=st.empty()? n :st.top();
          
          st.push(i);
          
      }
      
      return result;
  }
    int sumSubarrayMins(vector<int>& arr) {

        vector<int>nse=nSE(arr);
        vector<int>pse=pSE(arr);
        int n=arr.size();

        long long result=0;
        for(int i=0;i<n;i++){
            int left=i-nse[i];
            int right=pse[i]-i;

          

            long long total = (left * right) % mod;
            total = (total * arr[i]) % mod;

            result = (result + total) % mod;
        }
        return result;
        
    }
};