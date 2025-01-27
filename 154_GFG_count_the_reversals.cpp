//! Count the Reversals

int countRev (string s){
    
    //! if odd sized string then impossible to make pairs
    if(s.length() & 1) return -1;
    
    stack<char> st;
    
    for(auto ch: s){
        if(ch == '{')
            st.push(ch);
        else if(!st.empty() && st.top() == '{')
            st.pop();
        else
            st.push(ch);
    }
    
    //! if stack is still not empty, let's count reversals
    int ans=0;
    while(!st.empty()){
        char a = st.top(); st.pop(); 
        char b = st.top(); st.pop();
        
        //! if same brackets, then only 1 bracket need to reverse
        if(a == b)
            ans = ans+1;
        //! if different brackets, then 2 brackets need to reverse
        else
            ans = ans+2;
    }
    
    return ans;
}