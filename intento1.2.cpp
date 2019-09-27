#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

struct memoria{
    string pos;
    
    int blockSize=0;
	int numberOfBlocks=10;

	};



/*
 void begin();
 
void begin(){
	cin >> opc_begin;
	if(opc_begin=="mount") { 
		cin >> nombre_sis_arc >> blockSize >> numberOfBlocks;
		
	}else if(opc_begin=="unmount"){
		cout<<"jalo";
	}
}


*/

int main(){
	///////////////////////////////////////////////////////////////
	// INICIO DE DECLARACIONES
	///////////////////////////////////////////////////////////////
	
	memoria datos;
	//declaraciones primera parte
	string opc_begin, nombre_sis_arc;
	int blockSize, numberOfBlocks;
	
	//declaraciones de segunda parte
	string nombre_archivo, contenido;
	
	
	
	///////////////////////////////////////////////////////////////
	// INICIO DE CODIGO
	///////////////////////////////////////////////////////////////
	
	
	cin >> opc_begin;
	if(opc_begin=="mount") { 
		cin >> nombre_sis_arc >> blockSize >> numberOfBlocks;
		
			char  c0[blockSize], c1[blockSize], c2[blockSize], c3[blockSize], c4[blockSize], c5[blockSize], c6[blockSize], c7[blockSize], c8[blockSize], c9[blockSize];
			char baul[numberOfBlocks];
			baul[0]=*c0;
			baul[1]=*c1;
			baul[2]=*c2;
			baul[3]=*c3;
			baul[4]=*c4;
			baul[5]=*c5;
			baul[6]=*c6;
			baul[7]=*c7;		
			baul[8]=*c8;
			baul[9]=*c9;
	
		memcpy(c1, &datos, sizeof(datos));
		
		cout << "Ingresa el nombre del archivo a crear(con su extension): ";
		cin.ignore();
		getline(cin, nombre_archivo);
		
		
	}else if(opc_begin=="unmount"){
		cout<<"jalo";
	}else if(opc_begin=="ls"){
		//mostrar_archivos();
	}
	
	
	



	
	
	
	ofstream salida(nombre_archivo.c_str());
	
	salida.write(baul, 512);
	salida.close();
	
	ifstream lectura(nombre_archivo.c_str());
	lectura.seekg(0, ios::beg);
	lectura.read(baul, 512);
	lectura.close();
	
	memoria copia;
	memcpy(&copia, baul, sizeof(copia));
	cout << datos.pos;
	//cout << "ejercicios.txt";
	return 0;
  
} 


/*

void cmd()
{
  while (true)
  {
    cout << "Comando: ";
    string comando;
    getline(cin, comando);
    system(comando.c_str());
    if (comando == "exit" || comando == "EXIT") break;   
  }   
}




int main(int argc, char *argv[])
{
	
 cmd();
 system("PAUSE");
 return 0;
}


*/
