class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        vector<int>arr1(0);
        set<int>st;
        sort(arr.begin(), arr.end());
        int cnt=arr[arr.size()-1];
        for(int i=arr.size()-2; i>=0; i--)
        {
            cnt-=arr[i];
            arr1.push_back(cnt);
            cnt=arr[i];
        }
        for(auto it:arr1)
        {
            st.insert(it);
        }
        if(st.size() == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
