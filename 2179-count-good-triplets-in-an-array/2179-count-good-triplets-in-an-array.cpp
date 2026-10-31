class Solution {
public:
typedef long long ll;
    long long querySegmentTree(int queryStart, int queryEnd, int i, int l, int r, vector<ll>&segmentTree){
        if(r < queryStart || l > queryEnd) return 0;

        if(l >= queryStart && r <= queryEnd) return segmentTree[i];

        ll mid = l + (r - l) / 2;

        ll left = querySegmentTree(queryStart, queryEnd, 2 * i + 1, l, mid, segmentTree);

        ll right = querySegmentTree(queryStart, queryEnd, 2 * i + 2, mid + 1 , r, segmentTree);

        return left + right;
    }

    void updateSegmentTree(int i, int l, int r, int idx, vector<ll>& segmentTree){
        if(l == r){
            segmentTree[i] = 1;
            return;
        }

        ll mid = l + (r - l) / 2;

        if(idx <= mid){
            updateSegmentTree(2 * i + 1, l, mid, idx, segmentTree);
        }else{
            updateSegmentTree( 2 * i + 2, mid +1, r, idx, segmentTree);
        }

        segmentTree[i]= segmentTree[2 * i + 1] + segmentTree[2 * i + 2];
    }
    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        unordered_map<int, int>mp;
        for(int i = 0; i < n; i++){
            mp[nums2[i]] = i; // nums1[i] at index in nums2;
        }

        vector<ll>segmentTree(4 *n);

        updateSegmentTree(0, 0, n - 1, mp[nums1[0]], segmentTree);

        ll result = 0;
        for(int i = 1; i < n; i++){
            int idx = mp[nums1[i]];

            ll leftCommonCount = querySegmentTree(0, idx, 0, 0, n - 1, segmentTree);

            ll leftNotCommonCount = i - leftCommonCount;
            ll elementsAfterIdxNums2 = ( n - 1) - idx;
            ll rightCommonCount = elementsAfterIdxNums2 - leftNotCommonCount;

            result += leftCommonCount * rightCommonCount;

            updateSegmentTree(0, 0, n - 1, idx, segmentTree);
        }

        return result;
    }
};