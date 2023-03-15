#include <iostream>
using namespace std;

main(){

int inicio=0,fin=0,res=0;
cout <<"Ingrese tabla inicio:";
cin>>inicio;
cout <<"Ingrese tabla fin:";
cin>>fin;

for (int rango=inicio; rango<=fin;rango++){
	cout<<"tabla del "<<rango<<endl;
	for(int i=1;i<=10;i++){
		res=rango * i;
		cout<<rango<<" X " << i << " = "<<res<<endl;
	}
}
system("pause");
}
