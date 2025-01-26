//! Very Very Important
//! Largest Rectangle in Histogram

class Solution {
public:

    vector<int> prevSmaller(vector<int> heights){

        vector<int> ans(heights.size());

        stack<int> st;
        st.push(-1);

        for(int i=0; i<heights.size(); i++){
            int current = heights[i];

            //! Instead of value, store index
            while(st.top() != -1 && heights[st.top()] >= current){
                st.pop();
            }

            ans[i] = st.top();

            st.push(i);
        }

        return ans;        
    }

    vector<int> nextSmaller(vector<int> heights){

        vector<int> ans(heights.size());

        stack<int> st;
        st.push(-1);

        for(int i=heights.size()-1; i>=0; i--){
            int current = heights[i];

            while(st.top() != -1 && heights[st.top()] >= current){
                st.pop();
            }

            ans[i] = st.top();

            st.push(i);
        }

        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> prev = prevSmaller(heights);
        vector<int> next = nextSmaller(heights);

        int maxArea = INT_MIN;
        int size = heights.size();

        for(int i=0; i<size; i++){
            int length = heights[i];

            //! Important line
            if(next[i] == -1)
                next[i] = size;
        
            int width = next[i] - prev[i] - 1;

            int area = length * width;
            maxArea = max(area, maxArea);
        }

        return maxArea;
    }
};