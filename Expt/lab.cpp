// Expt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Lambda Expressions

typedef double Func(double);
double one(double x) { return 1; }
double call_a_function(Func f) { return f(12); }

int main() {
	
	//Lambda expressions 
	
	double n=3;

	n = call_a_function(one);//without lambda expression
	cout << n;

    n = call_a_function([] (double x) { return 1.0; }); //with lambda expressions
	cout << n;
	n = 2;

	n = call_a_function([](double x)->double { return 1; });//with lambda expressions specifying type explicitly
	cout << n;


}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
