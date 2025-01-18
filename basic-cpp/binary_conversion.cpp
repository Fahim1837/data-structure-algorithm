#include <iostream>

using namespace std;

int pow (int x, int n) {
	int y = 1;
	int i;
	
	for (i = 0; i < n; i++) {
		y *= x;
	}
	
	return y;

}

int decimal_to_binary (int value) {
	int i = 0, rem;
    int result = 0;
	while (value > 0) {
		rem = value %2;
		value /= 2;
		result += rem * pow(10, i);
		i ++;
	}
	return result;
}


int main() {
    int x;
    x = decimal_to_binary (25);
    cout << x << endl;
    x = decimal_to_binary (16);
    cout << x << endl;

    return 0;
}

