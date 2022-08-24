#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	//condition check
	int a = 3;
	int b = 6;
	int c = 4;
	cout << (a == b) <<endl ;
	/*condition check operator ==, !=, <=, >=, <, >, &&, ||
	&& operator means both conditions have to be true.
	|| operator means if any condition is true the condition is true 
	Here output 1 means true and 0 mean false*/
	cout << ((b>a) && (c>b)) << endl;
	cout << ((b>a) || (c>b)) << endl;
	
	int n;
	cin >> n ;
	if (n%2 == 0){
	    cout << "Even" << endl;}
	 else if (n % 3 == 0){
	     cout << "Divisible by 3" << endl;}
	  else {
	      cout << "Odd" << endl;}
	      
	      
	      
	return 0;
}
