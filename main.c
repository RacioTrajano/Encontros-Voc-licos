#include <stdio.h>
#include <string.h>

#define TAM_TEXTO 100
int main () {


int acha_encontro =0;
char texto[TAM_TEXTO] ={0};
char encontro[75][3] ={
"aa\0","ae\0","ai\0","ao\0","au\0",
"aA\0","aE\0","aI\0","aO\0","aU\0",
"Aa\0","Ae\0","Ai\0","Ao\0","Au\0",

"ea\0","ee\0","ei\0","eo\0","eu\0",
"Ea\0","Ee\0","Ei\0","Eo\0","Eu\0",
"eA\0","eE\0","eI\0","eO\0","eU\0",

"ia\0","ie\0","ii\0","io\0","iu\0",
"Ia\0","Ie\0","Ii\0","Io\0","Iu\0",
"iA\0","iE\0","iI\0","iO\0","iU\0",

"oa\0","oe\0","oi\0","oo\0","ou\0",
"Oa\0","Oe\0","Oi\0","Oo\0","Ou\0",
"oA\0","oE\0","oI\0","oO\0","oU\0",

"ua\0","ue\0","ui\0","uo\0","uu\0",
"Ua\0","Ue\0","Ui\0","Uo\0","Uu\0",
"uA\0","uE\0","uI\0","uO\0","uU\0"
};

while(fgets(texto,TAM_TEXTO, stdin)!= EOF){

fgets(texto,TAM_TEXTO, stdin);
char* pedaco;
char* substring;

pedaco =strtok(texto, " ");

while(pedaco != NULL){
  
  for (int i =0; i<75; i++){
  substring = strstr(pedaco,encontro[i]);
  if (substring != NULL){
    printf("%s\n", pedaco);
    acha_encontro++;
    break; 
  }
  }
  pedaco =strtok(NULL, " ");
}
}
printf("Total de encontros: %d", acha_encontro);


  return 0;
}