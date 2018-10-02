//Carlos Ivan Romero Hernandez RH18030

//librerias necesarias para el programa
#include <iostream>
#include <windows.h>

//acortar std::
using namespace std;

//Declaracion de funciones para calcular datos de soda y jugo
/*
Se declaran con tres variables referidas, las cuales se envían desde el main a la funcion
y la funcion realiza operaciones y cambia los valores iniciales, al momento de pedir 
la respuesta solo se llama la variable
*/
void soda(int&, int&, int&);
void jugo(int&, int&, int&);

void l();

int main(int argc, char** argv) {
system("Color 1B");//Color de texto y fondo en consola
string palabra; //variable para texto

//Estas variables se inicializan en cero porque las funciones cambiaran sus valores posteriormente
int aguaSoda=0;
int azucarSoda=0;
int aguaJugo=0;
int azucarJugo=0;
//Esta almacena la cantidad de productos, con ella se hacen los calculos para las variables anteriores
int cantidad;

//pantalla de inicio
cout<<"-------------------------------"<<endl;
cout<<"|INDUSTRIAS LA CONSTANCIA S.A.|"<<endl;
cout<<"-------------------------------"<<endl;

l();

//muestra las indicaciones al usuario, para el correcto uso
cout<<"Indicaciones: "<<endl;
cout<<"Debe ingresar el nombre del producto "<<endl;
cout<<"para calcular la cantidad de insumos necesarios. [Soda - Jugo]"<<endl;

l();

//ciclo para seleccionar el producto
do{
	 
	   
	cout<<"Ingrese el nombre producto: "; 
    getline(cin,palabra,'\n'); 
      
    l();
    
        		
	}while(palabra!="Soda" & palabra!="Jugo");//mientras no se cumpla alguna de las condicciones el ciclo se repite 

	
if(palabra=="Soda")/*si la palabra es igual a soda, es decir, si el producto seleccionado es Soda,
se ejecutan las lineas correspondientes, si no, se ejecutan las lineas de Jugo
*/
{
	//Se pide la cantidad de producto
    cout<<"Ingrese la cantidad de unidades a producir:"<<endl;
	cin>>cantidad; 
	
 
	system("cls");
	
	//Se envian los datos a la funcion soda
	soda(aguaSoda, azucarSoda, cantidad);
	
	//Muestra de resultados
    cout<<"Los insumos necesarios para producir "<<cantidad<<" unidades de Soda es:"<<endl; 
    cout<<" "<<endl;
    //Se muestran los datos que la funcion ya procesó
	cout<<"Agua: "<<aguaSoda<<" ml."<<endl;
	cout<<" "<<endl;
	cout<<"Azucar: "<<azucarSoda<<" g."<<endl;
	
}else{
	
	//Se pide la cantidad de producto
	cout<<"Ingrese la cantidad de producto a producir"<<endl;
	cin>>cantidad;
	
	
	system("cls");
	//Se envian los datos a la funcion jugo
	jugo(aguaJugo, azucarJugo, cantidad);
	
		//Muestra de resultados
    cout<<"Los insumos necesarios para producir "<<cantidad<<" unidades de Jugo es:"<<endl; 
    cout<<" "<<endl;
    //Se muestran los datos que la funcion ya procesó
	cout<<"Agua: "<<aguaJugo<<" ml."<<endl;
	cout<<" "<<endl;
	cout<<"Azucar: "<<azucarJugo<<" g."<<endl;
}
	
	cout<<" "<<endl;
	system("pause");
}

//Se procesan los datos correspondientes a la Soda
void soda(int& aguaSoda ,int& azucarSoda , int& cantidad)//Usa variables referenciadas desde el main
{
	//Variables para dar los valores de insumos por unidad
	int agua= 500;
	int azucar=800;
	
    
    aguaSoda=cantidad*agua;
    azucarSoda=cantidad*azucar;
	
}

//Se procesan los datos correspondientes al Jugo
void jugo(int& aguaJugo ,int& azucarJugo , int& cantidad)//Usa variables referenciadas desde el main
{
	//Variables para dar los valores de insumos por unidad
	int agua= 600;
	int azucar=700;
	
    
    aguaJugo=cantidad*agua;
    azucarJugo=cantidad*azucar;
	
}
//Funcion para limpiar pantalla
void l(){
	cout<<" "<<endl;
	system("pause");
	system("cls");
}
