// ! First Repeating Element -->

// todo Not good -->
int firstRepeated(vector<int> &arr){
    for (int i = 0; i < arr.size() - 1; i++){
        for (int j = i + 1; j < arr.size(); j++){
            if (arr[i] == arr[j]){
                // 1 base indexing
                return i + 1;
            }
        }
    }
    return -1;
}