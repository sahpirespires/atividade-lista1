#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, armazenar;
	
	cout<<"Informe um n�mero inteiro: ";
	cin>>numero;
	
	do{
		armazenar =armazenar +numero % 10;
		numero= numero / 10;
	}while (numero != 0);
	
	cout<<"A soma � "<< armazenar ;

	}
