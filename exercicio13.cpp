#include <iostream>

using namespace std;
 
int main (){
	int num_a, num_b, num_c, num_d;

	cout << "Digite um numero a: ";
	cin >> num_a;
	cout << "Digite um numero b: ";
	cin >> num_b;
  cout << "Digite um numero c: ";
  cin >> num_c;
  cout << "Digite um numero d: ";
  cin >> num_d;

	if (num_a > num_b && num_a > num_c && num_a> num_d)
		cout << "O maior valor e: " <<  num_a << endl;
  else if (num_b > num_c && num_b > num_d && num_b > num_a)
		cout << "O maior valor e: " <<  num_b << endl;
	else if(num_c > num_d && num_c > num_b && num_c > num_a)
		cout << "O maior valor e: " <<  num_c << endl;
	else
	cout << "O maior valor e: " <<  num_d << endl;
	
	if (num_a < num_b && num_a < num_c && num_a < num_d)
		cout << "O menor valor e: " <<  num_a << endl;
  else if (num_b < num_c && num_b < num_d && num_b < num_a)
		cout << "O menor valor e: " <<  num_b << endl;
	else if(num_c < num_d && num_c < num_b && num_c < num_a)
		cout << "O menor valor e: " <<  num_c << endl;
	else
	cout << "O menor valor e: " <<  num_d << endl;
	
	

	return 0;
}