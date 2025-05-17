class Solution {
public:
void mergeSort(vector<int>& nums, int s, int mid, int e){
    vector<int>temp;
    int l=s, h=mid+1;
    while(l<=mid && h<=e){
        if(nums[l]<=nums[h]){
            temp.push_back(nums[l]);
            l++;
        }
        else{
            temp.push_back(nums[h]);
            h++;
        }
    }
    while(l<=mid){
        temp.push_back(nums[l]);
        l++;
    }
    while(h<=e){
        temp.push_back(nums[h]);
        h++;
    }

    for(int i=s;i<=e;i++){
        nums[i]=temp[i-s];
    }
}
void merge(vector<int>& nums, int s, int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    merge(nums, s, mid);
    merge(nums, mid+1, e);
    mergeSort(nums, s, mid, e);
}
    void sortColors(vector<int>& nums) {
        int n=nums.size()-1;
        merge(nums, 0, n);
    }
};