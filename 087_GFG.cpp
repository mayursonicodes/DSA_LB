// ! GCD of two numbers -->

// ? GCD -> greatest common divisor
// ? HCF -> highest common factor
// ? HCF of 24, 72 is 24

// GCD(a,b) -> GCD(a-b, b) a>b
//          -> GCD(b-a, a) a<b

// todo Euclid's algorithm
int gcd(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;
    
    while(a>0 && b>0){
        if(a>b)
            a = a-b;
        else
            b = b-a;
    }
    return a == 0 ? b : a;
}