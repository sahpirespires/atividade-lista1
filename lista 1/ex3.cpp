#include <iostream>
using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
   int numero, i;
   
   bool primo = true;
   
   cout << "Digite um n�mero inteiro: ";
   cin >> numero;

   for (i = 2; i <= numero / 2; i++) {
      if (numero % i == 0) {
         primo = false;
         break;
      }
   }

   if (primo) {
      cout << "O n�mero " << numero << " � primo" << endl;
   } else {
      cout << "O n�mero " << numero << " n�o � primo" << endl;
   }

   return 0;
}

	
