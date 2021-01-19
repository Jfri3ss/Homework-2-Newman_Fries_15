//
//  main.cpp
//  Project 2
//
//  Created by Jeremiah Fries on 1/17/21.
//
/**
    @mainpage Concat Primes
    @author Author
    What does this program do in short? Perhaps the name of the project goes here?
*/

/** \file concat_primes.cpp
    \brief Brief explanation...

    Long explination goes here...
    Requires: C++11
*/


#include<iostream>
#include<string>

using namespace std;

/** \brief Brief function explaination

   And a long one...
    @return std::string
*/
    string get_concatenated_primes()
{
    string concat_primes = "";
    //Complete this function

    return concat_primes.substr(0, 1000);
}



//First convert int into string

string get_slice_of_5(const string & primes, const int index)
{

//Then add to string ret
    string ret = "";
    //Complete this function
    return ret;
}


// Function that checks whether n is prime or not

int isPrimeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0)
      {
         //Convert Int to String
         auto n = std::to_string(42);
         isPrime = false;
         break;
      }
   }
   return isPrime;
}

//Prime Number Generating Algorithm

int main(int argc, char *argv[]){
    using namespace std;
    int n;
    string concat_primes;

int isPrimeNumber(int);


   bool isPrime;
   int count;
   cout<<"Enter the value of n:";
   cin>>count;
   for(int n = 2; n < count; n++)
   {
       // isPrime will be true for prime numbers
       isPrime = isPrimeNumber(n);

       if(isPrime == true)
       cout<<n<<" ";

   }
   return 0;

    if (argc >= 2){

        concat_primes = get_concatenated_primes();
        assert(get_slice_of_5(concat_primes, 3) == "71113");
        cout<<"Unit Test 1 passed\n";
        assert(get_slice_of_5(concat_primes, 6) == "13171");
        cout<<"Unit Test 2 passed\n";

        //Please add 3 more unit test here/
    } else{
        cout<< "Please input n: ";
        while(cin >> n)
        {
            concat_primes = get_concatenated_primes();
            cout << get_slice_of_5(concat_primes, n) << endl;
            cout<< "Please input n: ";
        }
    }
    return 0;
}
