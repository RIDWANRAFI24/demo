#include <iostream>

using namespace std;

int main()
 {
 int arr[] = {11,22,33,44,55};//Lexical analysis(token)

 int n = 5, sum = 0;

 for (int i = 0; i < n; i++)//syntax analysis

 sum += arr[i];//lexical & syntax analysis(for operator)

 cout << "Average = " << (float)sum / n << endl;//semantic analysis(type casting)
}
