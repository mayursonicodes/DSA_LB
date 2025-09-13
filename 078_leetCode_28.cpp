class Solution {
public:
    // int strStr(string haystack, string needle){
    //     if(haystack.length() < needle.length())
    //         return -1;

    //     for(int i=0; i<=haystack.length() - needle.length(); i++){
    //         if(haystack.substr(i, needle.length()) == needle)
    //             return i;
    //     }
    //     return -1;
    // }

    // int strStr(string haystack, string needle){
    //     if(haystack.length() < needle.length())
    //         return -1;

    //     for(int i=0; i<=haystack.length() - needle.length(); i++){
    //         for(int j=0; j<needle.length(); j++){
    //             if(needle[j] != haystack[i+j])
    //                 break;
    //             if(j == needle.length()-1)
    //                 return i;
    //         }
    //     }
    //     return -1;
    // }

    int strStr(string haystack, string needle){
        int position = haystack.find(needle);
        return (position != string::npos) ? position : -1;
    }
};