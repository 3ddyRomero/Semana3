//cadena de caracteres
#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){

  //cadenas mediante chars
  char mensaje[] = "Hola Mundo";
  
  string cadena = mensaje;

  cout<<mensaje<<endl<<mensaje<<endl;

  cout<<"El tercer char es: "<<cadena[2]<<endl;

  //strings estilo c(c-string)
  string readBuffer;
  

  getline(cin,readBuffer);
  
  char* tempBuffer = new char(readBuffer.length()+1);

  std::strcpy(tempBuffer,readBuffer.c_str());

  char* palabra = std::strtok(tempBuffer.c_str()," ");

  while(palabra != NULL){
     cout<<palabra<<endl;
     palabra = std::strtok(NULL, " ");     
  }

  delete[] tempBuffer;

  return 0;	
}







