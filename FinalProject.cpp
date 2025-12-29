#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;



void loop(char c[3][3]);
void Introduccion(char c[3][3]);
void tablero(char c[3][3]);
void In_Valores(char c [3][3]);
void In_IA(char c [3][3]);
int ganador(char c[3][3]);

int main(){
	
	char c [3][3];
	printf("\t\t\t\t\t\tBIENVENIDO A Tic-Tac-Toe\n");
	printf("\t\t\t\t\t----------------------------------------\n");
	printf("\t\t\t\t\t\tSeleccione el modo de juego\n\n");
	printf("\t\t\t\t\t\t1.modo facil\n");
	printf("\t\t\t\t\t\t2.modo medio\n");
	printf("\t\t\t\t\t\t3.modo dificil\n");
	printf("\t\t\t\t\t\t4.modo 2 jugadores\n\n\n");
	
//	loop (c);//llamamos a todas las funciones , con un refedsco de pantalla
	int opcion;
	cin>>opcion;
	switch(opcion){
		case 1:
			loop (c);//llamamos a todas las funciones , con un refedsco de pantalla
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;	
		default:
			printf("Opcion ingresada Incorrecta");
	}
	
	
//	system("pause");
	return 0;
}


void loop(char c[3][3]){
	//Introduccion(c);
	//tablero(c);
	//In_Valores(c);
	//tablero(c);
	//In_IA(c);
	//tablero(c);
	int i,j;
	i=0;
	//j=0;
	Introduccion(c);
//	tablero(c);
	do{
		system("cls");
		tablero(c);
		if(i%2==0){
			In_Valores(c);
		}
		else{
			In_IA(c);
		}
		j=ganador(c);
		i++;
	}while(i<=9 && j==2);
	if(j==0){
		printf("Enhorabuena! Has ganado\n\n");
	}
	else if(j==i){
		printf("Ohh NOOOO!! Has perdido");
	}
	else{
		printf("Has empatado! intentalo nuevamente");
	}
}

void Introduccion (char c[3][3]){

	
	char var;
	var='1';
	
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			c[i][j]= var++;
		}
	}
}

void In_IA(char c[3][3]){
	int i,j,k;
	char var;
	
	srand(time(NULL));
	
	do{
		i=rand()%j;
		j=rand()&j;
		k=0;
		if (c[i][j]=='X' || c[i][j]=='O'){
			var=1;
		}
	}while(var==1);
	
	
	c[i][j]='O';
	
}

void In_Valores(char c[3][3]){
	
	int i,j,k;
	char var;
	
	do{
		do{
			printf("Coloca un a ficha: ");
			fflush(stdin);
			scanf("%c",&var);
		}while(var<'1' || var>'9');
		
		k=0;
		
		switch(var){
			case '1':{
				i=0;
				j=0;
				if(c[i][j]=='X' || c[i][j]=='O'){
					k=1;
					printf("La casilla esta ocupada. Ingresa otra ubicacion\n\n");
				}
				break;
			}
			
			case '2':{
				i=0;
				j=1;
				if(c[i][j]=='X' || c[i][j]=='O'){
					k=1;
					printf("La casilla esta ocupada. Ingresa otra ubicacion\n\n");
				}
				break;
			}
			case '3':{
				i=0;
				j=2;
				if(c[i][j]=='X' || c[i][j]=='O'){
					k=1;
					printf("La casilla esta ocupada. Ingresa otra ubicacion\n\n");
				}
				break;
			}
			case '4':{
				i=1;
				j=0;
				if(c[i][j]=='X' || c[i][j]=='O'){
					k=1;
					printf("La casilla esta ocupada. Ingresa otra ubicacion\n\n");
				}
				break;
			}
			case '5':{
				i=1;
				j=1;
				if(c[i][j]=='X' || c[i][j]=='O'){
					k=1;
					printf("La casilla esta ocupada. Ingresa otra ubicacion\n\n");
				}
				break;
			}
			case '6':{
				i=1;
				j=2;
				if(c[i][j]=='X' || c[i][j]=='O'){
					k=1;
					printf("La casilla esta ocupada. Ingresa otra ubicacion\n\n");
				}
				break;
			}
			case '7':{
				i=2;
				j=0;
				if(c[i][j]=='X' || c[i][j]=='O'){
					k=1;
					printf("La casilla esta ocupada. Ingresa otra ubicacion\n\n");
				}
				break;
			}
			case '8':{
				i=2;
				j=1;
				if(c[i][j]=='X' || c[i][j]=='O'){
					k=1;
					printf("La casilla esta ocupada. Ingresa otra ubicacion\n\n");
				}
				break;
			}
			case '9':{
				i=2;
				j=2;
				if(c[i][j]=='X' || c[i][j]=='O'){
					k=1;
					printf("La casilla esta ocupada. Ingresa otra ubicacion\n\n");
				}
				break;
			}
		}
	}while(k==1);
	c[i][j]='X';
}


void tablero(char c[3][3]){
	printf("\t\t\t\t\t\t");
//	printf("\n-----------------\n");
	printf("\n");
	printf("\t\t\t\t\t\t");
	printf("     |     |     ");
	printf("\n");
	printf("\t\t\t\t\t\t");
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			if(j<2){
			//	printf("    |\n");
				printf("  %c  |",c[i][j]);
			}else{
				printf("  %c  ",c[i][j]);
			//	printf("\n\t\t\t");
			}
		}
		//printf("/n-----------/n");
			if(i<2){
			printf("\n");
			printf("\t\t\t\t\t\t");
			printf("     |     |     ");
			printf("\n\t\t\t\t\t\t-----------------\n");
			printf("\t\t\t\t\t\t");
			printf("     |     |     ");
			printf("\n");
			printf("\t\t\t\t\t\t");
		}
	}
	printf("\n");
	printf("\t\t\t\t\t\t");
	printf("     |     |     ");
	printf("\n\n");
}

int ganador(char c[3][3]){
	if (c[0][0]=='X' || c[0][0]=='O'){
		if (c[0][0]==c[0][1]  && c[0][0]==c[0][2]){
			if(c[0][0]=='X'){
				return 0; //Yo he ganado
			}
			else{
				return 1;//Yo he perdido
		}
	}
	if (c[0][0]==c[1][0]&&c[0][0]==c[2][0]){
		if(c[0][0]=='X'){
				return 0; //Yo he ganado
			}
			else{
			
				return 1;//Yo he perdido
		}
	}
}
	if (c[1][1]=='X' || c[1][1]=='O'){
		if (c[1][1]==c[0][0]&&c[1][1]==c[2][2]){
			if(c[1][1]=='X'){
				return 0; //Yo he ganado
			}
			else{
			
				return 1;//Yo he perdido
		}	
		}
		if (c[1][1]==c[1][0]&&c[1][1]==c[1][2]){
			if(c[1][1]=='X'){
				return 0; //Yo he ganado
			}
			else{
			
				return 1;//Yo he perdido
		}	
	}
		if (c[1][1]==c[2][0]&&c[1][1]==c[0][2]){
			if(c[1][1]=='X'){
				return 0; //Yo he ganado
			}
			else{
			
				return 1;//Yo he perdido
		}
		}
		if (c[1][1]==c[0][1]&&c[1][1]==c[2][1]){
			if(c[1][1]=='X'){
				return 0; //Yo he ganado
			}
			else{
			
				return 1;//Yo he perdido
		}
		}	
}
	if (c[2][2]=='X' || c[2][2]=='O'){
		if (c[2][2]==c[2][0]&&c[2][2]==c[2][1]){
			if(c[2][2]=='X'){
				return 0; //Yo he ganado
			}
			else{
			
				return 1;//Yo he perdido
		}	
		}
		if (c[2][2]==c[0][2]&&c[2][2]==c[1][2]){
			if(c[2][2]=='X'){
				return 0; //Yo he ganado
			}
			else{
			
				return 1;//Yo he perdido
		}	
		}
}
	return 2;
}


