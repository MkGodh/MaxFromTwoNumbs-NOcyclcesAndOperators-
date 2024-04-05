#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;
int main() {
	float a;
	float b;
	cin >> a >> b;

	float middle = (a + b) / 2;
	float diff = fabs(a - b);

	float max = middle + diff / 2;
	float min = middle - diff / 2;

	cout << max << "\n" << min;
}