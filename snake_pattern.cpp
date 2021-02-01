#include"bits/stdc++.h"
#define ll long long int
using namespace std;
int main()
{
	int n;
	cin >> n;
	int gap = n*2;
	bool even = true;
	int rows = n;
	int i, j, k;
	int start = 1, present = 1;
	// present - to calculate all next row's start number 
	// start - To use in loops
	// gap - spaces 
	// rows - number of rows
	// even - to denote even row or odd row 
	// if even row - start from inc to dec
	// if odd row - start from dec to inc 
	for (i = 0; i < rows; i++) {
		for (j = 0; j < gap; j++) {
			cout << " ";
		}
		gap -= 2;
		if (even) {
			for (k = start; k < n + start; k++) {
				cout << k << " ";
				present++;
			}
			even = false;
			start = present - 1;
		}
		else {
			for (k = start + n; k > start; k--) {
				cout << k << " ";
			}
			present = present + n;
			start = present;
			even = true;
		}
		cout << "\n";
	}
}
