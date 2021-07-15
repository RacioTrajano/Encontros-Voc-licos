#include <stdio.h>
#include <string.h>

#define TAM_TEXTO 100
int main () {

int acha_pedaco;
int acha_encontro =0;
char texto[TAM_TEXTO] ={0};
char encontro[25][2] ={"aa","ae","ai","ao", "au","ea","ee","ei","eo","eu","ia","ie","ii","io","iu","oa","oe","oi","oo","ou","ua","ue","ui","uo","uu"};

fgets(texto,TAM_TEXTO, stdin);
char* pedaco;
char* substring;


pedaco =strtok(texto, " ");

while(pedaco != NULL){
  
  for (int i =0; i<25; i++){
  substring = strstr(pedaco,encontro[i]);
  if (substring != NULL){

    printf("%s\n", pedaco);
    acha_encontro++;
    break; 
  }
  pedaco =strtok(NULL, " ");
  }
}

printf("Total de encontros: %d", acha_encontro);


  return 0;
}