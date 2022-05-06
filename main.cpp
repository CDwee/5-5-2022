// Started 5:34 5-5-2022

#include <iostream>
#include <iomanip>
#include <string> // IMPORTANT

using namespace std;

int main() {
    
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};      // Apple
    string s6 {s1, 0, 3}; // App
    string s7 (10, 'X'); // XXXXXXXXXX
    
//    cout << s0 << endl;             // No garbage
//    cout << s0.length() << endl;    // empty string
    
    // Initialization
//    cout << "\nInitialization" << "\n-------------------------------" << endl;
//    cout << "s1 is initialized to: " << s1 << endl;
//    cout << "s2 is initialized to: " << s2 << endl;
//    cout << "s3 is initialized to: " << s3 << endl;
//    cout << "s4 is initialized to: " << s4 << endl;
//    cout << "s5 is initialized to: " << s5 << endl;
//    cout << "s6 is initialized to: " << s6 << endl;
//    cout << "s7 is initialized to: " << s7 << endl;

//    Comparison
//    cout << "\nComparison" << "\n-------------------------------" << endl;
//    cout << boolalpha;
//    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;               // True Apple == Apple
//    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;               // False Apple != Banana
//    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;               // True Apple != Banana
//    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;                // True Apple < Banana
//    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;                // True Banana > Apple
//    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;                // False apple > Apple
//    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;     // True Apple == Apple
    
//    Assignment
//    cout << "\nAssignment" << "\n-------------------------------" << endl;
//    
//    s1 = "Watermelon";
//    cout << "s2 is now: " << s1 << endl;    // Watermelon
//    s2 = s1;
//    cout << "s2 is now: " << s3 << endl;   // Watermelon
//    
//    s3 = "Frank";
//    cout << "s3 is now: " << s3 << endl;   // Frank
//    
//    s3[0] = 'C'; // Crank
//    cout << "s3 change first letter to 'C': " << s3 << endl;    // Crank
//    s3.at(0) = 'P';
//    cout << "s3 change first letter to 'P': " << s3 << endl;    // Prank

//    Concatenation

//    s3 = "Watermelon";
//    cout << "\nConcatenation" << "\n-------------------------------" << endl;
//    
//    s3 = s5 + " and " + s2 + " juice";      // Apple and banana juice
//    cout << "s3 is now: " << s3 << endl;    // Apple and banana juice
    
//    s3 = "nice " + " cold " + s5 + "juice";     // Compiler error
//    
//    for loop
    cout << "\nLooping" << "\n-------------------------------" << endl;
    
    s1 = "Apple";
    for (size_t i {0}; i < s1.length(); ++i)
        cout << s1.at(i);       // or s1[i]     Apple
    cout << endl;
    
//    Range-based for loop
//    for (char c: s1)
//        cout << c;  // Apple
//    cout << endl;
  
// Ended at 8:02  5-5-2022
