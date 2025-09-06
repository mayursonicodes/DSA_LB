//! Group Anagrams

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>>mp;

    for(auto &i: strs){
        string s = i;
        sort(s.begin(), s.end());
        mp[s].push_back(i);
    }

    vector<vector<string>> ans;
    for(auto &i: mp){
        ans.push_back(i.second);
    }
    return ans;
}

//! --------------------------------------------------------------------------------------------

std::array<int, 26> hash(string &s){
    std::array<int, 26> hash = {0};
    for(auto &i: s)
        hash[i-'a']++;
    return hash;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<std::array<int, 26>, vector<string>>mp;
    // unordered_map<unordered_map<char, int>, vector<string>>mp; //! Not work

    for(auto &i: strs){
        mp[hash(i)].push_back(i);
    }

    vector<vector<string>> ans;
    for(auto &i: mp){
        ans.push_back(i.second);
    }
    return ans;
}