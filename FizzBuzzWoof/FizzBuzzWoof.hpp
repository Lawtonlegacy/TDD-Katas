#ifndef FIZZBUZZWOOF_HPP
#define FIZZBUZZWOOF_HPP
#include <iostream>
#include <string>

std::string isDivisible(int number){
    
    if(number % 15 == 0) return "FizzBuzz";         // FizzBuzz
    else if(number % 3 == 0) return "Fizz";         // Fizz
    else if(number % 5 == 0) return "Buzz";         // Buzz
    else if(number % 7 == 0) return "Woof";         // Woof
    else return "";
}


#endif