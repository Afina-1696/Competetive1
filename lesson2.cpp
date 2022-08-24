#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	cout << 7/2 << endl;//integer type input daikha fol o integer e ashbe
	cout << 7/2.0 << endl;//2.0 ekhane double type input nawar fole output o double type hobe
	
	//Operator presidence- je kon operator age kaj korbe
	
	//Deta type ranges or overflow 
	//Overflow - output limitation er baire chole jawar fole overflow creat hoy
	//integer limitation
	//-10^9 < int < 10^9
	//-10^12 < long int < 10^12
	//-10^18 < long long int < 10^18
	long int a = 1000000;//int a = 1000000;
	long int b = 1000000;//int b = 1000000;
	long int c = a*b;//int c = a*b;//long int c = a* 1ll * b;
	cout << c <<endl;
	cout << "\n";
	// double and float er data  store korar man int ba long long int er thekaw boro.....tobuo amra boro data store er shomoy double use korte parbo na bcz double e precision thake ete output vhul ashe tai double use na kore long long int use kora better
	
	//jekono data type er man jana jay nicher code er madhome
	int mx = INT_MAX;
	cout << mx << endl;
	//last limitetion er baire hoia jawar karone ayta abr o starting point mane negetive man chole ashe
	cout << mx +1 << endl;
	
	//double data store korar kicu tecnique
	/*double d = 100000;
	double e = 100000;
	double f = d*e;
	cout <<  fixed << setprecision(0) << f <<endl;*/
	
	
	//operator presidence 
	
	

	return 0;
	
}
