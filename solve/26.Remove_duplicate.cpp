class Solution {
    public:
     int removeDuplicates(vector<int>& nums) {
       set<int> st;
       int l = nums.size();
       for(int i = 0; i < l; i++){
           st.insert(nums[i]);
       }
       int N = st.size();
       nums.clear();
       for(auto it = st.begin(); it != st.end(); it++) {
           nums.push_back(*it);
       }
       return N;
     }
   };