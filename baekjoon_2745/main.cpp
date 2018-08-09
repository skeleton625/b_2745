#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int n, s;
unsigned long long result;
string i1;

int main(){
	cin >> i1 >> n;
	s = i1.size();
	for (int i = 0; i < s; i++) {
		if (i1.at(s - i - 1) > 58) result += (i1.at(s - i - 1) - 'A' + 10)*pow(n,i);
		else result += (i1.at(s - i - 1) - '0')*pow(n, i);
	}
	cout << result;
	return 0;
}