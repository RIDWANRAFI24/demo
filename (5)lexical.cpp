#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
using namespace std;
int main()
{
    string code =
        "int main() {\n"
        "int a = 10, b = 20;\n"
        "int sum = a + b;\n"
        "if (sum > 20) sum = 0;\n"
        "return sum;\n"
        "}";              // Semantic analysis (for take  input)

    unordered_set<string> keywords = {
        "int", "return", "if", "else", "for", "while", "do", "break", "continue", "void"
    };
    unordered_set<char> operators = {'+', '-', '*', '/', '=', '<', '>', '%', '&', '|', '!'};

    int keywordCount = 0, identifierCount = 0, operatorCount = 0;

    stringstream ss(code);
    string token;

    while (ss >> token)// Syntax analysis (loop )
    {
        if (keywords.count(token)) {
            keywordCount++; // Semantic analysis(keyword match)
        }
        else if (isalpha(token[0]) || token[0] == '_') {
            identifierCount++; // Semantic analysis (checking)
        }

        for (char ch : token) {
            if (operators.count(ch)) {
                operatorCount++; // Semantic analysis (operator match)
            }
        }
    }

    cout << "\nLexical Analysis Summary:\n";
    cout << "Keywords: " << keywordCount << endl;
    cout << "Identifiers: " << identifierCount << endl;
    cout << "Operators: " << operatorCount << endl;

}
