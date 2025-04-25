#include <iostream>
using namespace std;

void getTwoValues (int &begin, int &end);
int getNextPrime(int begin);
int getPrevPrime(int end);
int PrimeNum (int num);

void getTwoValues(int &begin, int &end){ //*Assign two input values to the parameters
//loop
do { 
    cout << "Enter two integers: "; // Ask for two integer values to User
    cin >> begin >> end; //*Assign two input values to the parameters
    if (begin >= end){ // The first input "begin" must be less than the second input "end"
       cout << " Invalid input; first input must be less than second input. Try again.\n";
    }
  } while (begin >= end); // Otherwise, you should retake two inputs repeatedly until begin < end
}

int PrimeNum(int num){
    if(num < 2)
       return 0; // No return value, prime numbers start @ 2
    for (int i=2; i*i <= num; i++){
        if (num % i == 0)
            return 0; // No return value
    }
    return 1; //for prime number
}

int getNextPrime(int begin){ // Find the closest next prime number to the given parameter
    int next = begin + 1; // In other words, prime number > begin and the closest to the "begin"
    while (PrimeNum(next) == 0){
        next++;
    }
    return next; // Return the prime number
}

int getPrevPrime(int end){ // Find the prime number which is closest to and less than the given parameter
    int prev = end - 1; // prime number < end
    while (prev > 1 && PrimeNum(prev) == 0){
        prev--;
    }
    return prev; // Return the prime number
}