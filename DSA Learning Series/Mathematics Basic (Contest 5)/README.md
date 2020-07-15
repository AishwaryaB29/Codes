# MATHEMATICS IN COMPETITIVE PROGRAMMING

## 1. GCD SAMPLE CODE
```cpp
int gcd(int a, int b) 
{  
    if (a == 0 || b == 0) 
       return 0; 

    if (a == b) 
        return a; 

    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
```

IN-BUILT function :
```cpp
__gcd(a,b)
```
## 2. LCM SAMPLE CODE 
```cpp
(a*b) / ( __gcd(a,b) )
```

## 3. DIFFERENCE OF TWO SQUARES

_!!! IMPORTANT NOTE : Any number can be represented as a difference of two squares iff (the number)%4 != 2 !!!_

## 4. PISANO PERIOD

The **Fibonacci Series** under modulo repeats itself.
