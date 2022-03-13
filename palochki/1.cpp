#include <iostream>
using namespace std;
int sti(char *a){
	const char *b = "0123456789";
	int i = 0, s = 0;
	while(a[i] != '\0'){
		for (int j = 0; j <= 9; j++){
			if (a[i] == b[j]){
				s*=10;
				s+=j;
				j = 10;
			}
		}
		i++;
	}
	return s;
}
void its(int a, char *b){
	const char *c = "0123456789";
	int i = 0, k = a;
	while(k > 0){
		i++;
		k/=10;
	}
	while(a > 0){
		b[i - k - 1] = c[a % 10];
		a/=10;
		k++;
	}
	b[k] = '\0';
}
int main(){
	int n;
	char b[100];
	cin >> b;
	//its(n, b);
	n = sti(b);
	cout << n << "\n";
}