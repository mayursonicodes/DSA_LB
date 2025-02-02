//! First Unique Character in a String

int firstUniqChar(string s){
    int freq[26] = {0};
    queue<int> q;

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        freq[ch - 'a']++;
        q.push(i);

        while(!q.empty()){
            if(freq[s[q.front()] - 'a'] > 1)
                q.pop();
            else
                break;
        }
    }

    if(q.empty())
        return -1;

    return q.front();
}