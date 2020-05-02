/*El presidente de un club de futbol requiere calcular el sueldo de sus jugadores
si se tiene como dato la edad y la nacionalidad del jugador.

Ademas se sabe que el sueldo se calculara de la siguiente manera:
Sueldo fijo $2500.00
Si es extranjero recibe un bono de $500.00

Si la edad esta entre 15 y 20, el salario incrementa en $1400.00
Si la edad esta entre 21 y 25, el salario incrementa en $1500.00
Si la edad esta entre 26 y 30, el salario incrementa en $1200.00
Si la edad es mayor a 30, el salario incrementa en $800.00
Determine el sueldo del jugador si se tiene como datos la edad y nacionalidad.

Mostrar un reporte del total a pagar de planilla, así como el total de jugadores por
los rangos de edad. Ademas de indicar que rango de edad es el mas remunerado.
*/


#include <iostream>
#include <fstream>
using namespace std;

struct empleado{
	string  njugadores;
	int  edad, i;
	string nacionalidad;
	float salariobase;
};



void princiapal();

void principal(){


	string njugador;
	int edad, i;
	
	int extrangero,nacionalidad, nacional; 
	float salariobase=2500;
	int salarioedad,n;
	float jugadores[n];
		
	{
	
	while((edad=15) || (edad<=60)){
			cout<<"Cuantos jugadores Ingresara: "<<endl;
			cin>>n;
			cout<<"Digite la Edad del Jugador: "<<endl;cin>>edad;
					
					if((edad>=15) && (edad<=20)){
						salariobase+=1400;
					//cout<<salariobase<<endl;
					} else if((edad>=21) &&(edad<=25)){
						salariobase+=1500;
						//cout<<salariobase<<endl;
					}else if((edad>=26) &&(edad<=30)){
						salariobase+=1200;
						//cout<<salariobase<<endl;
					}else if(edad>=30, edad<=100,edad++){
						salariobase+=800;
						//cout<<salariobase<<endl;
					}
		
				//cout<<"el salario es:"<<salariobase<<endl;
				//system("pause");
				//exit(1);
				
				if(nacionalidad==extrangero) {
					salariobase+500;
					cout<<"indique si es nacional o extrangero"<<endl;salariobase;
				}else if(nacionalidad==nacional){
					salariobase;
				cout<<"indique si es nacional o extrangero"<<salariobase;
				}
	
				cout<<"el salario es:"<<salariobase<<endl;
				system("pause");
				exit(1);
		 	
				}
			

 }

}


	
int main(){

principal();
}	
	
