#include <iostream>
using namespace std;
int main(){
	int i=1;
	int grade;
	double total=0;
	while(i<=3){
		cout << "�U�@�Ӧ��Z: ";
		cin >> grade;
		total=total+grade;		
		i=i+1;
	}
	cout << "Total: " << total << endl;
	cout << "Ave: " << total/3 << endl;
}
