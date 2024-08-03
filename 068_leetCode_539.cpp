// ! Minimum time difference -->

// ? convert time string into minute integer
// ? sort it
// ? find the difference between i and i+1
// ? Important step

int findMinDifference(vector<string> &timePoints){

    vector<int> minutes;

    // Step 1 -->
    for(int i = 0; i < timePoints.size(); i++){
        string current = timePoints[i];

        int hours = stoi(current.substr(0, 2));
        int min = stoi(current.substr(3, 2));
        int totalMinutes = hours*60 + min;
        minutes.push_back(totalMinutes);
    }

    // Step 2 -->
    sort(minutes.begin(), minutes.end());

    // Step 3 -->
    int minimum = INT_MAX;

    for(int i = 0; i < minutes.size()-1; i++){
        int difference = minutes[i+1] - minutes[i];
        minimum = min(minimum, difference);
    }

    // todo Step 4 --> Important step
    int lastDiff1 = (minutes[0] + 1440) - minutes[minutes.size()-1];
    int lastDiff2 = minutes[minutes.size()-1] - minutes[0];
    int lastDiff = min(lastDiff1, lastDiff2);
    minimum = min(minimum, lastDiff);

    return minimum;
}