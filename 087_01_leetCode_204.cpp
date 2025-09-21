// ! Count Primes

// todo Naive Approach (Time Limit Exceed)
bool isPrime(int n){
    if(n <= 1) return false;

    for(int i=2; i<n; i++){
        if(n%i == 0) return false;
    }
    return true;
}
int countPrimes(int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(isPrime(i)) count++;
    }
    return count;
}

// todo Sqrt Approach (Time Limit Exceed)
bool isPrime(int n){
    if(n <= 1) return false;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}
int countPrimes(int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(isPrime(i)) count++;
    }
    return count;
}

// todo Sieve of Eratosthenes
/*
? 1. create an array from 2 -> (n-1) and mark all of them as prime.
? 2. start from 2 till end, mark all the numbers comes in the table of 2 as non prime.
? 3. repeat 2, only for prime numbers(3, 5, etc).
? 4. rest elements marked as prime will be counted.
*/

int countPrimes(int n){

    if(n == 0) return 0;

    vector<bool> primeArray(n, true); // all are marked as true
    primeArray[0] = primeArray[1] = false;
    int count = 0;
    for(int i=2; i<n; i++){
        if(primeArray[i]){
            count++;

            int table = 2*i;
            while(table<n){
                primeArray[table] = false;
                table += i;
            }
        }
    }
    return count;        
}

// todo Segmented Sieve
// ! search on google
// ! instead of starting of 0 for checking prime we have given low, high(10 to 51 prime)
// ! Instead of N, we have given a range and we have to find the prime number between that range.