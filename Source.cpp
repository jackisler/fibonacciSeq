#include <iostream>
#include <array>
#include <string>

using namespace std;

long int fibonacciSeq(int n);

int main() {
	// Declare a variable n for the nth term the user will input.
	int n;

	// Input n from command prompt
	cout << "What term of the fibonacci sequece should we print (input integer): ";
	cin >> n;
	cout << endl;

	//Function to print the fibonacci sequence to the nth term using recursion
	for (int iter = 0; iter < n; iter++) {
		cout << fibonacciSeq(iter) << " ";
	}
	//Holds output window open in Visiual Studio
	cin.clear();
	cin.ignore();
	cin.get();

	return 0;
}

long int fibonacciSeq(int n)
{
	if (n == 0) {
		return 0;
	}
	else if(n == 1) {
		return 1;
	}else{
		return fibonacciSeq(n - 2) + fibonacciSeq(n - 1);
	}	
}