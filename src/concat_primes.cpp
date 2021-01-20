//By Jermeiah Fries and William Newman
#include<iostream>
#include<string>
#include<assert.h>
using namespace std;
int isPrimeNumber(int);
string concat_primes = "";
string get_slice_of_5 ="";
int main(){
int start;
int count = 0;
cout<<"Enter a number: ";
cin>>start;
bool isPrime;
   for(int n = 2; n < 10000; n++) {
      // isPrime will be true for prime numbers
      isPrime = isPrimeNumber(n);
      if(isPrime == true && concat_primes.size() < 1000)
         concat_primes = concat_primes + to_string(n);
   }
   //test output delete later
   //cout<<concat_primes<<endl;
   while(count < 5){
        get_slice_of_5 = get_slice_of_5 + concat_primes[start+count];
        count++;
    }
    cout<<"Your prime number is: "<<get_slice_of_5<<endl;
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

    return 0;
}
