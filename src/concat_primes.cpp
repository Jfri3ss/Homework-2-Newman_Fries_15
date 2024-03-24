/**
@mainpage COP 3330 Project 2
@Jermeiah Fries and William Newman

We each took turns solving the coding puzzle and fixing compiling errors. We cleaned up our code, made it more human-readable and organized.
Our program calculated every prime number up to 1000 then converts that integer into a string.
The program then concatenates five numbers together based on the value of the start integer.

Then the values are printed to the console and the program terminates. We accomplished this by using a for loop,
and if statement to concatenate the values if they are primes, then a while loop to chunk the string into groups of five prime numbers.

The engine of our program is the algorithm that we created, the algorithm iteratively loops through a number set, and uses the division comparison operator,
if the value is equal to 0 (Primes are divisible by 1 or the number itself) then the number is added to the prime number set.
Then at the end, we added our unit tests for our selected values.
*/

#include<iostream>
#include<string>
#include<assert.h>

using namespace std;
string concat_primes;
string get_slice_of_5;
int main(){
int isPrimeNumber(int);
int start;
int count = 0;
cout<<"Enter a number: ";
cin>>start;
bool isPrime;
   for(int n = 2; n < 10000; n++) {
      //isPrime will be true for prime numbers
      isPrime = isPrimeNumber(n);
      if(isPrime == true && concat_primes.size() < 1000)
         concat_primes = concat_primes + to_string(n);
   }
   while(count < 5){
        get_slice_of_5 = get_slice_of_5 + concat_primes[start+count];
        count++;
    }

    cout<<"Your prime number is: "<<get_slice_of_5<<endl;

    //assert(get_slice_of_5(concat_primes, 3) == "71113");
    //cout<<"Unit Test 1 passed\n";
    //assert(get_slice_of_5(concat_primes, 6) == "13171");
    //cout<<"Unit Test 2 passed\n";
    //assert(get_slice_of_5(concat_primes, 10) == "19232");
    //cout<<"Unit Test 3 passed\n";
    //assert(get_slice_of_5(concat_primes, 120) == "92332");
    //cout<<"Unit Test 4 passed\n";
    //assert(get_slice_of_5(concat_primes, 500) == "03910");
    //cout<<"Unit Test 5 passed\n";
    return 0;

}

int isPrimeNumber(int n) {
   bool isPrime = true;
   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }
   return isPrime;
}
