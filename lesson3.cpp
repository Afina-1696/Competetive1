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

	int x = 1;
	while(x <= 10)
	{
		cout << x << endl;
		x++;
	}

	for(int i=0; i <= 10; i++)
	{
		cout << i << endl;
	}

    //test case and double loop example
    int z,t;
    cin >> t;
    for(int test=0; test<t; test++){
    /**/
    for(int v =1; v <= z; v++){
        for(int j=1; j<=v; j++)//ay linetar mane hoilo
        {

        }
    }
    }

	return 0;
}
