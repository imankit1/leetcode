class Solution {
public:

    void mergeSort(vector<int>& nums, int s, int mid, int e){
        vector<int>temp;
        int i=s, j=mid+1;
        while(i<=mid && j<=e){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=e){
            temp.push_back(nums[j]);
            j++;
        }


        for(int i=s;i<=e;i++){
            nums[i]=temp[i-s];
        }
    }
    void merge(vector<int>& nums, int s, int e){
        int mid=s+(e-s)/2;
        if(s>=e) return;
         merge(nums, s, mid);
         merge(nums, mid+1, e);
         mergeSort(nums, s, mid, e);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        merge(nums, 0, n-1);
        return nums;
    }
};