#include <iostream>
using namespace std;
int main(){
	int a=18;
	int n=0;
	cout << "�п�J1~20�Ӽ�: " << endl; 
	if (a<=20){ 
	while (n==0){
		cin >> a;
		if (a==18){
		cout << "����F!!";
		n++;
	}
		if (a==17 || a==19)
		cout << "�t�@�I�IOAO" << endl;
		else if (a<17 || a>19)
		cout << "�A�ոլ�QQ" << endl;
	}
}
    if (a>20 || a<=0)
    cout << "87�п�J1��20�H�����Ʀn�v" << endl;
    system("pause");
} 
