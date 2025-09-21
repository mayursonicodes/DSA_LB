//!  1. (a % n) -> [0, . . ... , n-1]
//!  2. Generally, to avoid overflow while storing Integer we do modulo with a Large number.
//!      1. (a + b) % M = a % M + b % M
//!      2. a % M - b % M = (a - b) % M
//!      3. ((a % M) % M) % M = a % M
//!      4. a % M * b % M = (a * b) % M