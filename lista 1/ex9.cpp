#include <iostream>
using namespace std;

int main() {
   int num, original, resto, soma = 0;
   cout << "Digite um n�mero inteiro: ";
   cin >> num;

   original = num;

   while (original != 0) {
      resto = original % 10;
      soma += resto * resto * resto;
      original /= 10;
   }

   if (soma == num) {
      cout << "O n�mero " << num << " � um n�mero de Armstrong" << endl;
   } else {
      cout << "O n�mero " << num << " n�o � um n�mero de Armstrong" << endl;
   }

   return 0;
}

