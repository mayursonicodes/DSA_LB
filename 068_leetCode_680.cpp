// ! Valid Palindrome II -->

bool checkPalindrome(string arr, int start, int end){
    while(start < end){
        if(arr[start] == arr[end]){
            start ++, end--;
        }
        else{
            return false;
        }
    }
    return true;
}

bool validPalindrome(string s){

    int i = 0;
    int j = s.length() - 1;

    while(i < j){
        if(s[i] == s[j]){
            i++, j--;
        }
        else{
            return checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1);
        }
    }
    return true;
}