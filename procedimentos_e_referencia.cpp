#include <iostream>
#include <locale.h>

using namespace std;
void LER(int &b){
    cout<<"Digite um n�mero inteiro: ";
    cin>>b;
}
main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
    LER(a);
	cout<<"Valor de A: "<<a<<endl;

}
