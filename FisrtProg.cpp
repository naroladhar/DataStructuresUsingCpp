#include <cstdlib>
 #include <iostream> /* This program inputs two numbers x and y and outputs their sum */
 using namespace std;
 int main( ) 
 {
  	int x, y;
 	cout << "Please enter two numbers: ";
 	cin >> x >> y; // input x and y
 	int sum = x + y; // compute their sum
 	cout << "Their sum is " << sum <<endl;
 	return 0; // terminate successfully
 }
