#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;  // Lexical analysis (token)
    string name; // Lexical analysis (token)
    float marks; // Lexical analysis (token)

    cout << "Enter number of students: "; // Syntax analysis
    cin >> n;

    ofstream fout("students.txt");
    for (int i = 0; i < n; i++)  // Syntax analysis (loop)
    {
        cout << "Enter name of student " << i + 1 << ": "; // Syntax analysis
        cin >> name;
        cout << "Enter marks of " << name << ": ";  // Syntax analysis
        cin >> marks;
        fout << name << " " << marks << endl; // Semantic analysis (file write)
    }
   fout.close(); // Semantic analysis (file close)

    ifstream fin("students.txt"); // Semantic analysis (file checking)
    cout << "\nStudent Records:\n";
    while (fin>> name >> marks)
    {
        cout << "Name: " << name << ", Marks: " << marks << endl; // Semantic analysis (string & float output checking)
    }
    fin.close();      // Semantic analysis (file close)
}
