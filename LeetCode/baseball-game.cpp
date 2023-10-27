class Solution {
public:
    int calPoints(vector<string>& o) {
        int res=0;
        stack<int>st;
        for(int i=0; i<o.size(); i++)
        {
            if(st.empty())
            {
                st.push(stoi(o[i]));
            }
            else
            {
                if(o[i] == "+")
                {
                    int x = st.top();
                    st.pop();
                    int y = st.top();
                    st.push(x);
                    st.push(x+y);
                }
                else if(o[i] == "C")
                {
                    st.pop();
                }
                else if(o[i] == "D")
                {
                    st.push(2*st.top());
                }
                else
                {
                    st.push(stoi(o[i]));
                }
            }
        }
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        return res;
    }
};
