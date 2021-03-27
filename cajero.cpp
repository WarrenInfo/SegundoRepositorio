//librerías
#include <iostream>
#include<cmath>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
//variables
	int ahorro, ingresodeposito, clave, maximo, resto;
	int cant1000,cant20000,cant50000,cant2000,cant5000,cant10000;
	//asignación de variables
	
	ahorro= 10000000;
	ingresodeposito=1;
	maximo=250000;
	clave= 8367;
	while (ahorro>ingresodeposito && maximo>ingresodeposito && ingresodeposito!=0) {
	
	system ( "color 06" );
	cout<<"****************************************************************************"<<endl;
	cout<<"\t\t\t Cajero para depósitos "<<endl;
	cout<<"****************************************************************************"<<endl;
	cout<<"Ingrese clave:"<<endl;
	cin>>clave;
	cout<<"****************************************************************************"<<endl;
	if (clave==8367) {
		
		cout<<"Indique dinero a depositar:"<<endl;
		cin>>ingresodeposito;
	if(ahorro>ingresodeposito && maximo>ingresodeposito &&ingresodeposito !=0) {
		
		ahorro=ahorro-ingresodeposito;
		maximo=maximo-ingresodeposito;
		cout<<"------------------------------------------"<<endl;
		cout<<"Usted va a depositar: "<<ingresodeposito<<" colones"<<endl;
		cout<<" "<<endl;
		cout<<"Su cuenta tiene actualmente: "<<ahorro<<" colones"<<endl;
		cout<<"------------------------------------------"<<endl;
		cout<<"Queda, luego del depósito: "<<ahorro<<" colones"<<endl;
		cout<<"------------------------------------------"<<endl;
		system ( "color 03" );
		
		
		cant50000=ingresodeposito/50000;
		resto=ingresodeposito%50000;
		cout<<"Billetes de 50000:"<<ceil(cant50000)<<endl;
		
		cant20000=resto/20000;
		resto=resto%20000;
		cout<<"Billetes de 20000:"<<ceil(cant20000)<<endl;
		
		cant10000=resto/10000;
		resto=resto%10000;
		cout<<"Billetes de 10000: "<<ceil(cant10000)<<endl;
		
		cant5000=resto/5000;
		resto=resto%5000;
		cout<<"Billetes de 5000: "<<ceil(cant5000)<<endl;
		
		cant2000=resto/2000;
		resto=resto%2000;
		cout<<"Billetes de 2000: "<<ceil(cant2000)<<endl;
		
		cant1000=resto/1000;
		resto=resto%1000;
		cout<<"Billetes de 1000: "<<ceil(cant1000)<<endl;
		ingresodeposito=1;
		
		} else{
		 	if (ingresodeposito=0){
		 		cout<<"No ha ingresado importe valido"<<endl;
		 		ingresodeposito=0;
		 		
		 		}else if (ingresodeposito>ahorro){
		 			cout<<"No tiene saldo"<<endl;
		 			ingresodeposito=0;
		 			
		 			}else if (ingresodeposito>maximo){
		 				cout<<"Ha depósitado el maximo por dia"<<endl;
		 				ingresodeposito=0;
		 				}
						}
						}else {
							cout<<"Clave invalida"<<endl;
							}
							system("pause");
							system("cls");
							}						
							return 0;
							}
//Haciendo la primera prueba para un Pull Request 
