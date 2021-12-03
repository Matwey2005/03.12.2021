#include <iostream>
#include <ctime>
using namespace std; 
void fill_array(int *mas, const int size, int left, int right) {
	srand(time(0)); 
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % (right - left + 1) + left; 
	}
}
void print_array(int* mas, const int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' '; 
	}
	cout << endl; 
}
int sum_array(int* mas, const int size) {
	int sum = 0; 
	for (int i = 0; i < size; i++) {
		sum += mas[i]; 
	}
	return sum; 
}

int proizvood(int* mas, const int size) {
	int proiz = 1; 
	for (int i = 0; i < size; i++) {
		proiz *= mas[i]; 
	}
	return proiz; 
}
double srednee_arifm(int* mas, const int size) {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += mas[i];
		}
		return double(sum) / size;
}
int colichestvo(int* mas, const int size) {
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] % 2 == 0) {
			k++;
		}
	}


}
	bool bol(int* mas, const int size, int x) {
		for (int i = 0; i < size; i++) {
			if (mas[i] == x) {
				return true;
			}
		}
		return false; 
	}
int main() {
	int eta = 10;
	const int n = 10;
	int arr[n]; 
	fill_array(arr, n, 0, 10); 
	print_array(arr, n);
	cout << sum_array(arr, n) << "\n"; 
	cout << proizvood(arr, n)<<endl;
	cout << srednee_arifm(arr, n) << endl;
	cout << colichestvo(arr, n) << endl; 
	cout << boolalpha << bol(arr, n, eta); 
}