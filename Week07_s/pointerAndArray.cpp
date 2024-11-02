#include <iostream>
#include<array>
using namespace std;

int main() {
	int n[10];
	int* p; 
	
	// 배열 n을 3의 배수로 초기화
	for(int i=0; i<10; i++) 
		*(n+i) = i*3; 
	 
	// 포인터 p를 이용하여 배열 n 출력
	


	
	// 포인터 p를 이용하여 배열 n의 원소 값을 2증가
	



	// 배열 n 출력
	for(int i=0; i<10; i++)
		cout << n[i] << ' '; 
	cout << "\n";	
}