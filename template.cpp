#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	for (int i = 0; i < 4 ; i++) {
		int a, b;
		cin >> a >> b;
		cout << a << " x " << b << " = " << a*b;
		cout << endl;
	}
	std::vector<int> v;
	v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int i = 0;
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i){
		cout << *i << " ";
	}
	cout << endl;
	for (int isi : v) {
		cout << isi << " , ";
	}
	return 0;
}