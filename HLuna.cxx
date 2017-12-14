

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <sstream>

using namespace std;



void diccionario(){
	
	string entrada[100];
	cout << "GENERADOR DE DICCIONARIOS PARA FUERZA BRUTA" << endl ;
	cout << "" << endl;
	cout << "Ingrese la cantidad de palabras a generar:" << endl ;
	
	int numero;
	
	cin>>numero;
	cout << "Ingrese palabras guias seguidas de Enter (0 para terminar, max 100):" << endl ;
	
	string palabra="";
	string generada;
	
	
	int contador= 0;
	while(palabra!="0"){
		cin>>palabra;
		entrada[contador]= palabra;
		contador++;
		
		}
		cout << "Ingrese la ruta y el nombre de el archivo ejm:/home/usuario/Escritorio/archivo.txt:" << endl;
		string ruta;
		cin>>ruta;
		
		ofstream salida;
		
		salida.open(ruta,ios::out);
		
		
		while(salida.fail()){
		cout <<"No se puede crear el archivo, revise permisos o ruta!" << endl ;
		cout << "Ingrese la ruta y el nombre de el archivo ejm:/home/usuario/Escritorio/archivo.txt:" << endl;
		cin>>ruta;
		salida.open(ruta,ios::out);
			}
			
	
		for(int i=0;i<contador-1;i++){
		salida <<  entrada[i]  << endl;
		}
		int num;
		srand (time(NULL));
	
		for(int j=0;j<numero;j++){
		num=rand()%contador;
		

		 generada = entrada[num];
		 num=rand()%contador;
		 int random=rand()%5;
		 	char mas3;
		  string cadenas="";
			int mas =0;			
				switch(random){
			 
			 case 0:
			 generada+=entrada[num];
			 break;
			 
			 case 1:
			mas=rand()%100;
			cadenas = static_cast<std::ostringstream*>(&(std::ostringstream() << mas))->str();
			generada+=entrada[num]+cadenas; 
			 break;
		
		
		case 2:
		
		mas3 = 33 + rand() % (126 - 33);
		  generada+=entrada[num]+mas3;
		break;
			
			
	
	
		case 3:
		 mas=rand()%100;
			cadenas = static_cast<std::ostringstream*>(&(std::ostringstream() << mas))->str();
			 generada+=cadenas;
		
		break;
			
			case 4:
			
				mas= 33 + rand() % (132 - 33);
			 	cadenas = static_cast<std::ostringstream*>(&(std::ostringstream() << mas))->str();
					
			 generada+=cadenas;
			break;
			
			 
			 }
		 
		 
		 			salida << generada << endl;

		}
		salida.close();
		cout << "-------------------" << endl;
		cout << "Diccionario creado!" << endl;
		cout << "-------------------" << endl;
		cout <<""<<endl;
		
	
}

void preguntar(){
	
 cout << "MENU" << endl;
 cout << "1. Generador de Diccionarios" << endl;
 cout << "0. Salir" <<endl;
	
 int respuesta;
 
 cin>>respuesta;
 
 switch(respuesta){
	 
	 
	 case 0:
	 exit(1);
	 break;
	 
	 case 1:
	
	diccionario();
	break; 
	
	 }
	
	}



int main(void)
{
cout << "" << endl;
cout <<	"/*** "<< endl;
cout << "*"<< endl; 
cout <<	"*    $$|  |$$ |$$| "<< endl; 
cout <<	"*    $$|  |$$ |$$|                                  "<< endl; 
cout <<	"*    $$|  |$$ |$$|     $$| |$$  |$$$$$$|  |$$$$$$|  "<< endl; 
cout <<	"*    $$$$$$$$ |$$|     $$| |$$ |$$ __ $$|  ____$$|  "<< endl; 
cout <<	"*    $$|  |$$ |$$|     $$| |$$ |$$|  |$$| $$$$$$$|  "<< endl;
cout <<	"*    $$|  |$$ |$$|___  $$|_|$$ |$$|  |$$| $$___$$|  "<< endl;
cout <<	"*    $$|  |$$ |$$$$$$$| $$$$$  |$$|  |$$| $$$$$$$|  "<< endl;
cout << "*    ---------------------------------------------- "<<endl;
cout << "* Code by: En1gm4"<< endl ;
cout <<	"/***"<< endl ;
cout << "" << endl;

 
 
	preguntar();
	
	

}


