// ! Reverse Only Letters

string reverseOnlyLetters(string s) {
    int start=0, end=s.size()-1;
    while(start<end){
        if(isalpha(s[start]) && isalpha(s[end])){ //! isalpha function return true/false
            swap(s[start], s[end]);
            start++, end--;
        }
        else if(!isalpha(s[start]))
            start++;
        else
            end--;
    }
    return s;
}