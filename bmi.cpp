#include<iostream>
using namespace std;

int main(){
	float ghad, vazn,bmi;
	cout << "please enter ghad=";
	cin >> ghad;

	cout << "please enter vazn=";
	cin >> vazn;

	ghad *= ghad;

	bmi = vazn / ghad;

	if (bmi < 18.5){
		cout << "underweight" << endl;
	}
	if (18.5 < bmi < 24.9){
		cout << "normal" << endl;
	}
	if (25 < bmi < 29.9){
		cout << "overweght" << endl;
	}
	if (30 < bmi < 34.9){
		cout << "obese" << endl;
	}
	if (35< bmi ){
		cout << "extermlyobese"<<endl;
	}

	system("pause");
	return 0;
}