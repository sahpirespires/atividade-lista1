#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
    float media;

    cout << "Digite o primeiro n�mero inteiro: ";
    cin >> n1;

    cout << "Digite o segundo n�mero inteiro: ";
    cin >> n2;

    cout << "Digite o terceiro n�mero inteiro: ";
    cin >> n3;

    media = (n1 + n2 + n3) / 3.0;

    cout << "A m�dia aritmetica dos n�meros e: " << media << endl;

    if (media >= 7) {
        cout << "Aprovado" << endl;
    } else if (media >= 5) {
        cout << "Recuperac�o" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
	
}
