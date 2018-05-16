//funciones y apuntadores

#include<iostream>

using std::cout;
using std::endl;
using std::cin;


//crea un arreglo de tamaño n por medio de apuntadores 
//prototipo de funcion
int* crearArreglo(int);


//libera memoria de un arreglo
void liberarMemoria(int*); 

//imprime los elementos de un arreglo
void printarray(int*,int);

//lee los elementos de un arreglo
int* leerElementos(int*,int);

//muestra el menu, lee y valida la opcion elegida, retorna una opcion valida
int menu();

//Llenar arreglo


int  main(){
  //int opcion;
  bool seguir = true;
  int* array = NULL;
  int size = 0;
  int dato;

  while (seguir){
    switch( menu() ){
       case 1:
	       cout<<"Ingrese el tamaño del arreglo:";
	  int tempsize 
          cout<<"Ingrese el tamaño del arreglo\n";
	  cin>>size;

	//validar el size
	  if(array != NULL){
		delete[] array;  
		array = NULL;
	  }
	  array = crearArreglo(size);
     	  break;
       case 2: 
	  if(array != NULL)
		  leerElementos(array,size);
	     
	 }
       case 3:
    	  if(array != NULL)
              printarray(array,size);
	  else 
   	      cout<<"El arreglo está vacío.\n"<<endl;
	  break;
       case 4:
	  if (array!=NULL){
	     liberarMemoria(array);
	     array=NULL;
	  }
	  break;

    } 
  
   
   if(array != NULL)
	liberarMemoria(array);
	
   

   return 0;
}

int menu(){
  int opcion;
  cout<<"        MENU\n"
      <<"1.- Crear Arreglo"<<endl
      <<"2.- Llenar el Arreglo"<<endl
      <<"3.- Mostrar el arreglo"<<endl
      <<"4.- Liberar Memoria"<<endl 
      <<"5.- Salir del programa"<<endl;
     
      cin>>opcion;
     if(opcion <1 || opcion >5)
	cout <<"Opcion fuera de rango, intente de nuevo"<<endl;
                opcion = 0;
}

//leer elementos
int* leerElementos(int* array, int size){
  cout<<"Ingrese los elementos: "<<endl;
  for(int i=0;i<size;i++){
  cout<<"Ingrese un valor para la casilla "<<i<<":";  
  cin>>array[i];
  }
}

//imprime los elemetos de un arreglo
void printarray(int* array, int size){
  for(int i=0; i<size ;i++){
     cout<<" "<<array[i];
  }
}


//libera memoria de un arreglo de enteros
void liberarMemoria(int* array){
	delete[] array;
}

//crea arreglo de enteros de tamaño n
int* crearArreglo(int size){
  
   int* retValue =  new int[size];
   return retValue;



}
