#include <iostream>
using namespace std;

main(){

int i = 0;
do {
  cout << i <<endl;
  i++;
  
}while (i < 5);
char s;

do{
	cout<<"Desea Ingresar Otro Valor: ";
	cin>>s;
} while (s=='s');


system("pause");
}
