//todo Solve this question using RE.

class Solution {
public:
    // string removeOccurrences(string s, string part) {

    //     int position = s.find(part);

    //     while(position != string::npos){
    //         s.erase(position, part.length());
    //         position = s.find(part);
    //     }
    //     return s;
    // }

    void removeOccur(string &s, string &part){
        int startIndex = s.find(part);

        //! Base case
        if(startIndex == string::npos)
            return;
        
        string leftPart = s.substr(0, startIndex);
        string rightPart = s.substr(startIndex + part.size(), s.size());
        s = leftPart + rightPart;

        removeOccur(s, part);
    }

    string removeOccurrences(string s, string part) {
        removeOccur(s, part);
        return s;
    }
};