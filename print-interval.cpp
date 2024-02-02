/*
Author: Zuhayer Tashin
Course: CSCI-135
Instructor: Tong Yi
Assignment:Lab2B

Write a program print-interval.cpp that asks the user to input two integers L and U (representing the lower and upper limits of the interval), 
and print out all integers in the range L ≤ i < U separated by spaces. 
Notice that we include the lower limit, but exclude the upper limit.
*/

#include <iostream>
using namespace std;

int main(){ 
    int L; // Declared the varible L of the first range
    cout << "Please enter L: ";
    cin >> L; // User input for the first range

    int U; // Declared the varible U of the last range
    cout << "Please enter U: ";
    cin >> U; // User input for the last range

    for(int i = L; i < U; i++) { // iterates through all integers from L to U
    
    cout << i << " "; // prints out the number from L to U

}
        return 0;
}