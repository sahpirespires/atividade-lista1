#include <iostream>

using namespace std;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome;
	int salario, aumento;
	
	cout<<"Informe seu nome: ";
	cin>>nome;
	
	cout<<"Informe seu sal�rio: ";
	cin>>salario;
	
	if (salario <=1500){
		aumento = salario* 1.10;
		cout<<"Sal�rio era " << salario << " e passou a ser " << aumento;
	}else if(salario >1500){
		aumento = salario* 1.05;
		cout<< "Sal�rio era " << salario << " e passou a ser " << aumento;
	}
}
