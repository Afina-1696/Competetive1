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
    /*while(t--) ay loop o use kora jay
    t jokhon 0 hoyw jabe loop off hoye jabe karon 0 mean false and condition dont match*/
    cin >> z;
    for(int v =1; v <= z; v++){
        for(int j=1; j<=v; j++)//ay linetar mane hoilo j loop ta v bar cholbe
        {
            cout << "*" ;

        }
        cout << endl;
    }
    }

    //infinet loop
    /*while() or while(1){
    }

    for(;;){
        }
        condition true hoy na tai infinetly cholte thakbe*/


    //jump statement break and continue
    for(int q=0; q<3; q++){
        for(int p=0; p<10; p++){
            if(p==8){
                break;//last for loop orthat p loop er baire cole jabe
                //continue; last for loop orthat p loop er upore chole jabe and loop abr ocholte thakbe
            }
            cout << p << endl;
        }
    }


    cin >> t;
    while(t--){
        int u;
        cin >> u;
        int digit_sum = 0;
        while(u > 0){
            int last_digit = u%10;
            cout << "last Digit = " << last_digit << endl;
            digit_sum = digit_sum + last_digit;
            u = u/10;
            cout << "u number after minus = " << u << endl;
        }
        cout << "sum of digits = " << digit_sum << endl;
    }


	return 0;
}
