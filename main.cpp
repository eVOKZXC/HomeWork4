#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a = 0.2;
	double b = 1.5;
	double y, t;

	a <= b ? y = 1 / (pow(a, 2) - a * b + pow(b, 2)) : y = a + log(pow(b, 2));
	if (y == b) {
		t = (2 * y + sqrt(pow(y, 2) - a)) / (2 * b - sqrt(pow(a, 2) - y));
	}
	else if (y < b) {
		t = pow(sin(y), 2) + 1 / (tan(a - b));
	}
	else {
		t = pow(y * sin(a), 2 / 3) + 1 / (sqrt(y * cos(b)));
	}

	cout << "y = " << y << endl << "t = " << t << endl;


}