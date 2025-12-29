/*
using namespace std;
//esto es un comentario
/*
  esto es un comentario
*/
/*

 long saldo=15000000;//como esta por fuera de las funciones es una variable global
 
 int user =1234;
 int pass=4321;
*/

 
 //las variables globales tienen la particularidad que viven en la memoria RAM durante toda la ejecucion de progrMA
//mientras que las variable locales solo viven en la memoria RAM el tiempo que dure la funcion


//el primer paso es declarar las funciones al principio de program en c++

/*



int imprimirMenu();
void consultarSaldo();
long consignar(long valor);
long retirar(long valor);
void salir();
bool validarUsuario(int usuario, int contrasenia);	
	
int main(){
}
	int opcion;
	 //variable de la cual se va a guardar la opcion de almacenar el valor
  long valor=0;
  int usuario;
  int contrasenia;
  
  cout<<"Por favor ingrese su usuario"<<endl;
  cin>>usuario;
  
  cout<<"Por favor ingrese su contrasenia"<<endl;
  cin>>contrasenia;
  
  
  //el tercer poaso es llamar la funcion en el programa principal
  //de nada sirve hacer la funcion mas bonita, la majeor si no sellama
  //las funciones son para llamarlas
  
  if(validarUsusario(usuario,contrasenia)){
  	opcion=imprimirMenu();
  	
  	switch(opcion){
  		case 1:
  			consultarSaldo();
  			break;
  			case 2:
  				cout<<"\nPor favor ingrese al valor que desea consignar: ";
  				cin>>valor;
  				saldo=consignar(valor);
  				cout<<"\nSu nuevo saldo es: "<<saldo;
  				break;
  				case 3:
  					cout<<"\nPor favor ingrese el valor que desee retirar: ";
  					cin>>valor;
  					if(valor<=saldo){
  						cout<<"\nSu nuevo saldo es:"<<retirar(valor);
  					} else{
  						cout<<"\n Lo sentimos su saldo es insuficiente";
  					}
  					break;
  					case 4:
  						salir();
  						break;
  						default:
  							cout<<"\nUsted ha ingresado una opcion invalida";
  	}
  }  else{
  	cout<<"\nSus credenciales son invalidas, por favor vuelva a intentarlo";
  }
}


//lo mejor es definirlas debajo de la funcion main, para darle prioridad a la funcion main
//el segundo paso es definir lo que hace la funcion o darle cuerpo a la funcion
  
  int imprimirMenu(){
  	int opcion=0; //variable en la cual se va a guardar la opcion que ingrese el ususario
  	cout << "\t\t\tBienvenido al Cajero del profe Jhon!\n";
	   cout <<endl;	
	    cout<<"1. Consultar saldo"<<endl;
  // cout<<"2. Consignar"<<endl;
  cout<<"2. Consignar\n";
  cout<<"3. Retirar\n";
  cout<<"4. Salir\n";
  cout<<"\nPor favor ingrese a opcion que desea realizar"<<endl;
  cin>>opcion;//opcion=input("")
	return opcion;
	
  }
  
  






//la palabra void significa que la funcion no va a retonar nada void
void consultarSaldo(){
  cout <<"\nSu saldo es: "<<saldo;
}

//las variables que van dentro de los parentesis se denominan parametros de la funcion
//son variables que va a necesitar la funcion para realizar algun calculo o validar algo


long consignar(vaLor){
	return saldo+valor;
}



long retirar(long valor){
	saldo-=valor;
	return saldo;	
}

void salir(){
	cout<<"\n Gracias por utilizar nuestros servicios";
}

bool validarUsuario(int usuario,int contrasenia){
	if(user==usuario && pass==contrasenia) return true;
	else return false;
}

*/
#include <iostream>
using namespace std;

// Variables globales
long saldo = 15000000; // Como está por fuera de las funciones es global
int user = 1234;
int pass = 4321;

// Declaración de funciones
int imprimirMenu();
void consultarSaldo();
long consignar(long valor);
long retirar(long valor);
void salir();
bool validarUsuario(int usuario, int contrasenia);

int main() {
    int opcion;
    long valor = 0;
    int usuario;
    int contrasenia;
	
	cout << "Por favor ingrese su usuario: (1234) "; 
	cin >> usuario; 
	cout << "Por favor ingrese su contrasenia: (4321) "; 
	cin >> contrasenia;
	

    // Validación de usuario
    if (validarUsuario(usuario, contrasenia)) {
        opcion = imprimirMenu();

        switch (opcion) {
            case 1:
                consultarSaldo();
                break;
            case 2:
                cout << "\nPor favor ingrese el valor que desea consignar: ";
                cin >> valor;
                saldo = consignar(valor);
                cout << "\nSu nuevo saldo es: " << saldo;
                break;
            case 3:
                cout << "\nPor favor ingrese el valor que desea retirar: ";
                cin >> valor;
                if (valor <= saldo) {
                    cout << "\nSu nuevo saldo es: " << retirar(valor);
                } else {
                    cout << "\nLo sentimos, su saldo es insuficiente";
                }
                break;
            case 4:
                salir();
                break;
            default:
                cout << "\nUsted ha ingresado una opcion invalida";
        }
    } else {
        cout << "\nSus credenciales son invalidas, por favor vuelva a intentarlo";
    }

    return 0;
}

// Definición de funciones
int imprimirMenu() {
    int opcion = 0;
    cout << "\t\t\tBienvenido al Cajero del profe Jhon!\n";
    cout << "1. Consultar saldo\n";
    cout << "2. Consignar\n";
    cout << "3. Retirar\n";
    cout << "4. Salir\n";
    cout << "\nPor favor ingrese la opcion que desea realizar: ";
    cin >> opcion;
    return opcion;
}

void consultarSaldo() {
    cout << "\nSu saldo es: " << saldo;
}

long consignar(long valor) {
    saldo += valor;
    return saldo;
}

long retirar(long valor) {
    saldo -= valor;
    return saldo;
}

void salir() {
    cout << "\nGracias por utilizar nuestros servicios";
}

bool validarUsuario(int usuario, int contrasenia) {
    return (user == usuario && pass == contrasenia);
}

