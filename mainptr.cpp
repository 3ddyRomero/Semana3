#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
	int* pointer=NULL;
	int* pointer2=pointer;

	/*declaramos arreglo de 5 espacios*/
	//reservar memoria
	pointer = new int[5];
	
	//asignamos un valor al arreglo 'pointer' en la posicion 3
	pointer [0]=10;
	pointer [1]=200;

	cout<<"Valor' :"<<*pointer<<endl<<
		"Valor: "<<pointer[1]<<endl;
	
	cout<<"Valor' :"<<*pointer2<<endl;
	pointer += 1;

	cout<<"Valor' :"<<*pointer2<<endl;
//	pointer -= 1;

	//liberar memoria - una casilla
	//delete pointer;
	//liberar memoria - todas las casillas
	
	delete[] pointer;
	
	//delete[] pointer2;//error
	
	pointer = NULL;
	if(pointer != NULL)
	  cout<<pointer[3];	

	cout<<"Direccion:"<<pointer<<endl;


	return 0;

}

