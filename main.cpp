#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//max=10
	float values[10];
	float variance = 0.0;
	float mean = 0.0;
	float standardDeviation = 0.0;
	float sumValues = 0.0;
	float meanValues = 0.0;

	int i;
	cout << "Enter 10 values: " << endl;

	for (i = 1; i <= 10; i++) {
		cin >> values[i];
		sumValues += values[i];
		mean = sumValues / 10;
	}
	for (i = 1; i <= 10; i++) {
		variance = pow((values[i] - meanValues), 2);
		variance = variance / 10;
		standardDeviation = sqrt(variance);
	}
	cout <<"The Standard Deviation of the set of Values is: "<< standardDeviation << endl;
	system("pause>0");
}
