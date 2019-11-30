#include<iostream>
#include<cmath>
using namespace std;


//Two values are inputted by the user and the fibonacci sequence is calculated until
//it converges at the golden ratio within .001
int main() {
	double size, var1, var2, gold;

	size = 2;

	cout << "Enter the first two digits you would like to use in this fibbonaci sequence: " << endl;;
	cin >> var1 >> var2;

	//array created and set initial values
	double * ptr = nullptr;
	ptr = new double[3];
	ptr[0] = 0;
	ptr[1] = var1;
	ptr[2] = var2;
	
	cout << endl << "Sequence: " << endl;

	//fibonacci sequence calculated in loop until it converges to the golden ratio
	do {
		ptr[0] = ptr[1];
		ptr[1] = ptr[2];
		ptr[2] = ptr[0] + ptr[1];

		cout << ptr[0] << endl;

		size++;

		//calculation of golden ratio
		gold =  (ptr[2] / ptr[1]) - (ptr[1] / ptr[0]) ;
		cout << " gold : " << gold << endl;
	} while (abs(gold) > 0.001);


	//once gold calculation reaches .001, it outputs the iterations it took to converge
	cout << ptr[1] << endl << ptr[2] << endl << "There are " << size << " members in this generated series" << endl;
	
	

}


