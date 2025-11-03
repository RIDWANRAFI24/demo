#include <iostream>

using namespace std;
int main()
 {
 string first, last;// Lexical analysis (tokens)
 cout << "Enter your first name: ";// Syntax analysis
 cin >> first;
 cout << "Enter your last name: ";// Syntax analysis
 cin >> last;
 cout << "Full name: " << first + " " + last << endl;// Semantic analysis (checking similar or not)
}



