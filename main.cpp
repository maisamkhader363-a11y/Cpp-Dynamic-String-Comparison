#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
char *compare(char A[], char B[]) {
	
	
	int lengthA = strlen(A);
	int lengthB = strlen(B);
	int maxlen=(lengthA > lengthB)?lengthA : lengthB;
		char* C = new char[maxlen+1];
		if (lengthA > lengthB) {
			strcpy(C, A);
		}
		if(lengthA==lengthB){
			strcpy(C, A);
		}
		else {
			strcpy(C, B);
		}
		return C;
}
int main() {
	int n;
	cout << "enter the length of the first string" << endl;
	cin >> n;
	char* A = new char[n+1];
	cout << "enter the first string size of(" << n - 1 << ")index" << endl;
	cin >> A;
	int m;
	cout << "enter the length of the secound string" << endl;
	cin >> m;
	char* B = new char[m+1];
	cout << "enter the secound string of(" << m - 1 << ")index" << endl;
	cin >> B;
	cout << "the longer string is:";
	char* result = compare(A, B);
	cout << result;
	delete[] A;
	delete[] B;
	delete[] result;
	return 0;
}
