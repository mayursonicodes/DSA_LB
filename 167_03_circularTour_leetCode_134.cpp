//! Circular tour / Gas station
//todo very important

//! Brute force
//! front, rear approach also

int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
    
    //! kitna petrol bacha hua h
    int balance = 0;

    //! kitna petrol kam padgya
    int deficit = 0;

    //! circuit kaha se start krre ho
    int start = 0;

    for(int i=0; i<gas.size(); i++){

        balance = balance + gas[i] - cost[i];
        if(balance < 0){
            //! yaha par galti hone ke chance h, be carefull
            deficit = deficit + balance;
            start = i+1;
            balance = 0;
        }
    }

    if(balance + deficit >= 0)
        return start;
    else
        return -1;
}