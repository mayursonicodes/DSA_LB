//! Very Important (Mostly Asked in Interview)

class Solution {
  public:
    int celebrity(vector<vector<int> >& mat){
        int n = mat[0].size();
        
        stack<int> st;

        //todo Step 1: Push all persons into stack
        for(int i=0; i<n; i++){
            st.push(i);
        }
        
        //todo Step 2: Run discard method, to get a mightBeCelebrity
        while(st.size() != 1){
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            
            //! 'a' is not a celebrity, 'b' might be
            if(mat[a][b] == 1)
                st.push(b);
            //! 'b' is not a celebrity, 'a' might be
            else
                st.push(a);
        }
        
        //todo Step 3: Check that person is actually celebrity or not
        int mightCelebrity = st.top(); st.pop();
        
        //! Celebrity should not know anyone
        for(int i=0; i<n; i++){
            if(mat[mightCelebrity][i] != 0)
                return -1;
        }
        
        //! Celebrity should be known by everyone
        for(int i=0; i<n; i++){
            if(mat[i][mightCelebrity] != 1 && i != mightCelebrity)
                return -1;
        }
        
        //! mightCelebrity is a celebrity
        return mightCelebrity;
    }
};