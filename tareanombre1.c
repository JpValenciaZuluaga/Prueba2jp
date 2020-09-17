//#include <iostream> 
#include <stdio.h>
#include<string.h>
//#include <bitset> 
#define Max 4
#define MaxB 8   
char entrada [Max];
int main() { 

  //Solicitamos el nombre
  printf("\nsu nombre\n");
	scanf( "%s",entrada);
  
  // Declaramos la variables que vamos a utilizar
   char characterJ = entrada[0];
   char characterO = 'O';
   char characterS = 'S';
   char characterE = 'E';
   char characterU = entrada[1];
   char characterA = entrada[2];
   char characterN = entrada[3];
   char character1, character2;    
   int i, x, y; 
   int s[8], p[8];

  // Empezamos a convertir las letras en binario (ASCII)
   for(x=0;x<4;x++){
    char letra1[MaxB], letra2[MaxB], respuesta[MaxB]; 
    //Asignamos las variables correspondiente por cada caso
    switch(x){
      case 0:
        character1 = characterJ;
        character2 = characterJ;
        break;
      case 1:
        character1 = characterO;
        character2 = characterU;
        break;
      case 2:
        character1 = characterS;
        character2 = characterA;
        break;
      case 3:
        character1 = characterE;
        character2 = characterN;
        break;
      default:
        break;
    }
    //Convertimos la letra en binario (ASCII)                  
    for(i=0;i<8;i++) {     
        s[i]=character1%2;     
        character1=character1/2;  
    }
    for(i=0;i<8;i++) {     
        p[i]=character2%2;     
        character2=character2/2;  
    }
    //Copiamos el resultado en un string para usarlo despues     
    int a,b;     
    for(b=0,a=7;b<8;b++,a--) { 
        letra1[b]= s[a]; 
    }
    for(b=0,a=7;b<8;b++,a--) { 
        letra2[b]=  (p[a]); 
    }
    //Asignamos de nuevo el valor de las letras ya que este se modifico
    switch(x){
      case 0:
        character1 = characterJ;
        character2 = characterJ;
        break;
      case 1:
        character1 = characterO;
        character2 = characterU;
        break;
      case 2:
        character1 = characterS;
        character2 = characterA;
        break;
      case 3:
        character1 = characterE;
        character2 = characterN;
        break;
      default:
        break;
    }
	 //printf("Esta es la letra: %c en (ASCII) binario es: %s \n",character1,letra1);
	 //printf("Esta es la letra: %c en (ASCII) binario es: %s \n",character2,letra2);
    // Imprimimos la conversion  
    //cout<<"Esta es la letra: "<<character1<<" en (ASCII) binario es: " <<letra1<<" \n";
    //cout<<"Esta es la letra: "<<character2<<" en (ASCII) binario es: " <<letra2<<" \n";
    //cout<<" \n";
    
    //Averiguamos el numero binario que con el operador | convertira la letra1 en la letra2
    for(y=0;y<8;y++){
      
      if (letra1[y]=='1' && letra2[y]=='1'){
        respuesta[y] = '0';
      }
      else if (letra1[y]=='1' || letra2[y]=='1'){
        if (letra1[y]=='1' && letra2[y]=='0'){
          respuesta[y]	  = '1';
        }
        else if (letra1[y]=='0' && letra2[y]=='1'){
          respuesta[y] = '1';
        }
      }
      else{
        respuesta[y] = '0';
      }
    }
		printf("Esta es la letra: %c en (ASCII) binario es: %s \n",character1,letra1);
		printf("Esta es la letra: %c en (ASCII) binario es: %s \n",character2,letra2);
		printf("\nSe necesitara el numero binario: %s para convertir la letra: %c en %c\n",respuesta,character1,character2);
    // Imprimimos el numero binario del resultado
    //cout<<"Se necesitara el numero binario: "<<respuesta<<" para convertir la letra: "<<character1<< " en la letra: "<<character2<<" \n";
    //cout<<" \n";
    //cout<<" \n";

   }
   //return 0; 
}
