#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int baraja1,baraja2,carta_jugador1,carta_jugador2,n,m,contador1,contador2,i=1,j;
char opcion;
int main(){
	contador1=baraja1=26;
	contador2=baraja2=26;
	int barajas[52]={1,2,3,4,5,6,7,8,9,10,11,12,13,
                 1,2,3,4,5,6,7,8,9,10,11,12,13,
				 1,2,3,4,5,6,7,8,9,10,11,12,13,
				 1,2,3,4,5,6,7,8,9,10,11,12,13};
				 //menu
				 printf("=======================================================================================================\n");
				 printf("                                  GUERRA DE CARTAS                                                     \n");
				 printf("                                    'BIENVENIDO'                                                       \n");
				 printf("=======================================================================================================\n");
	//modalidades de juego
	printf("en que modalidad quires jugar?\n");
	printf("opcion 1 contra la maquina elija la letra 'M'\n");
	printf("opcion 2 contra otra persona elija la letra 'p'\n");
	printf("que opcion elige?:");
		scanf("%c",&opcion);
		//modalida contra maquina
	if(opcion=='m'||opcion=='M'){
	printf("opcion elegida 'CONTRA MAQUINA'");

	while(baraja1<52&&baraja2<52){
	srand(time(NULL));
    int r;
    for(j=0;j<1;j++){
	r=rand() % 52;
	if(barajas[r]!=0){
}
}
j--;
		printf("\n");
		printf("""RONDA %d\n""",i);
		printf("ingresa el numero para la primera baraja 1:");
		scanf("%d",&carta_jugador1);
		if(carta_jugador1>13){
			printf("el numero que ingresaste no esta permitido, solo puedes ingresar numeros del 1-13\n");
			printf("ingresa un nuevo numero:");
			scanf("%d",&carta_jugador1);
			i-1;
		}
	
	printf("el numero random es:%d\n",barajas[r]);
		if(carta_jugador1>barajas[r]){
			contador1=baraja1+1;
			contador2=baraja2-1;
			printf("su baraja actual del jugador 1 es :%d\n",contador1);
				printf("su baraja actual del jugador 2 es :%d\n",contador2);
		}
		else{
			if(barajas[r]>carta_jugador1){
				contador2=baraja2+1;
				contador1=baraja1-1;
				printf("su baraja actual del jugador 2 es :%d\n",contador2);
				printf("su baraja actual del jugador 1 es :%d\n",contador1);
			}else{
				if(carta_jugador1==barajas[r]){
					printf("las cartas son iguales cada jugador pone 4 cartas y la ultima carta se compara\n");
				    printf("ingresa un valor para tu ultima carta:");
					scanf("%d",&n);
					if(n>13){
						printf("el numero que ingresaste no es valido, por favor ingresa un nuevo numero:");
					scanf("%d",&n);
					}
						srand(time(NULL));
                        int p;
                        for(j=0;j<1;j++){
	                    r=rand() % 52;
	                    if(barajas[p]!=0){
                        } 
                        }
                        j--;
						if(n>barajas[p]){
							contador1=baraja1+5;
							contador2=baraja2-5;
							printf("el numero random es:%d\n",barajas[p]);
							printf("su baraja actual del jugador 1 es :%d\n",contador1);
								printf("su baraja actual del jugador 2 es :%d\n",contador2);
					}
					else{
						if(barajas[p]>n){
							contador2=baraja2+5;
								contador1=baraja1-5;
									printf("el numero random es:%d\n",barajas[p]);
								printf("su baraja actual del jugador 2 es :%d\n",contador2);
									printf("su baraja actual del jugador 1 es :%d\n",contador1);
						}
					}
				}
				}
		}
					baraja1=contador1;
				baraja2=contador2;
			i++;
			//ganador
			if(contador1==52){
				printf("EL JUGADOR 1 ES EL GANADOR");
			}
			else{
				if(contador2==52){
				printf("EL JUGADOR 2 ES EL GANADOR");
			}
			}
	}
}
else{
	//modalidad contra otra persona
	if(opcion=='p'||opcion=='P'){
		printf("opcion elegida 'CONTRA OTRA PERSONA'");
	while(baraja1<52&&baraja2<52){
		printf("\n");
		printf("""RONDA %d\n""",i);
		printf("ingresa el numero para la primera baraja 1:\n");
		scanf("%d",&carta_jugador1);
		if(carta_jugador1>13){
				printf("el numero que ingresaste no esta permitido, solo puedes ingresar nueros del 1-13\n");
			printf("ingresa un nuevo numero:");
			scanf("%d",&carta_jugador1);
			i-1;
		}
		printf("ingresa el numero para la segunda baraja 2:\n");
		scanf("%d",&carta_jugador2);
			if(carta_jugador2>13){
				printf("el numero que ingresaste no esta permitido, solo puedes ingresar nueros del 1-13\n");
			printf("ingresa un nuevo numero:");
			scanf("%d",&carta_jugador2);
			i-1;
		}
		if(carta_jugador1>carta_jugador2){
			contador1=baraja1+1;
			contador2=baraja2-1;
			printf("su baraja actual del jugador 1 es :%d\n",contador1);
				printf("su baraja actual del jugador 2 es :%d\n",contador2);
		}
		else{
			if(carta_jugador2>carta_jugador1){
				contador2=baraja2+1;
				contador1=baraja1-1;
				printf("su baraja actual del jugador 2 es :%d\n",contador2);
				printf("su baraja actual del jugador 1 es :%d\n",contador1);
			}else{
				if(carta_jugador1==carta_jugador2){
					printf("las cartas son iguales cada jugador pone 4 cartas y la ultima carta se compara\n");
				    printf("ingresa un valor para la ultima carta\n");
					scanf("%d",&n);
					if(n>13){
				printf("el numero que ingresaste no esta permitido, solo puedes ingresar nueros del 1-13\n");
			printf("ingresa un nuevo numero:");
			scanf("%d",&n);
			i-1;
		}
					printf("ingresa otro valor para la ultima carta de segundo jugador\n");
					scanf("%d",&m);
					if(m>13){
				printf("el numero que ingresaste no esta permitido, solo puedes ingresar nueros del 1-13\n");
			printf("ingresa un nuevo numero:");
			scanf("%d",&m);
			i-1;
		}
						if(n>m){
							contador1=baraja1+5;
							contador2=baraja2-5;
							printf("su baraja actual del jugador 1 es :%d\n",contador1);
								printf("su baraja actual del jugador 2 es :%d\n",contador2);
					}
					else{
						if(m>n){
							contador2=baraja2+5;
								contador1=baraja1-5;
								printf("su baraja actual del jugador 2 es :%d\n",contador2);
									printf("su baraja actual del jugador 1 es :%d\n",contador1);
						}
					}
				}
				}
		}
					baraja1=contador1;
				baraja2=contador2;
			i++;
			//ganador
			if(contador1==52){
				printf("EL JUGADOR 1 ES EL GANADOR");
			}
			else{
				if(contador2==52){
				printf("EL JUGADOR 2 ES EL GANADOR");
			}
			}
	}
}
else{
	printf("solo puedes seleccionar la letra M o P, NI MODOS TIENES QUE REINICIAR DE NUEVO EL PROGRAMA XD");
}
}
			return 0;
			}