%{
int i=1;
int j=1;
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
char* k;
char *strdup(const char *s1); 
const char* YYText();
char d[5]="date\0";
char n[5]="name\0";
char *p1 = &d[0];
char *p2 = &n[0];
void insert(int key,char object[],char info[]);
void display();
%}

%option stack
%s date
%s name

digito    [0-9]
acentos   \xc3[\x80-\xbf]       
letra     [a-zA-Z]|{acentos}       
palavra   {letra}+        
ban       "Conta desactivada por violação das regras de conduta"    

   
%%
ER               { ECHO; /*imprime na saida ER (em geral a Expressao Regular encontrada na entrada*/ }
{digito}+        { ; /*encontrei um NUMERO*/ }
{palavra}        { ; /*encontrei uma PALAVRA*/ }
.|\n             { ; /*suprime da saida qualquer outro carater incluindo o NewLine*/ } 
[" "]+           { yy_push_state(date); }
\[{digito}+\]    { yy_push_state(name); }
{ban} {              
	k=strdup(yytext);
	insert(j,p2,k);
	j++;
}

<date>{digito}{2}\.{digito}{2}\.{digito}{4}[" "]{digito}{2}[":"]{digito}{2}$ { 
	k=strdup(yytext);
	insert(i,p1,k);
	i++;	
	yy_pop_state();
}
<name>.*$ {
	k = strdup(yytext);
	insert(j,p2,k);
	j++;
	yy_pop_state();
} 
%%

#define SIZE 502

struct DataItem {
   int key;   
   char* info;   
   char* obj;
};

struct DataItem* hashArray[SIZE]; 
struct DataItem* dummyItem;
struct DataItem* item;

int hashCode(int key) {
   return key % SIZE;
}

struct DataItem *search(int key) {
   //get the hash 
   int hashIndex = hashCode(key);  
	
   //move in array until an empty 
   while(hashArray[hashIndex] != NULL) {
	
      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex]; 
			
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }        
	
   return NULL;        
}

void insert(int key,char object[], char data[]) {
   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
   item->info = data;  
   item->key = key;
   item->obj=strdup(object);

   //get the hash 
   int hashIndex = hashCode(key);

   //move in array until an empty or deleted cell
   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }
	
   hashArray[hashIndex] = item;
}

struct DataItem* delete(struct DataItem* item) {
   int key = item->key;

   //get the hash 
   int hashIndex = hashCode(key);

   //move in array until an empty
   while(hashArray[hashIndex] != NULL) {
	
      if(hashArray[hashIndex]->key == key) {
         struct DataItem* temp = hashArray[hashIndex]; 
			
         //assign a dummy item at deleted position
         hashArray[hashIndex] = dummyItem; 
         return temp;
      }
		
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }      
	
   return NULL;        
}

void display() {
   	int c = 1;
	int t = 1;
	FILE *d;
   	d = fopen("/home/blackgaze/Desktop/Documents/PLC/TP1/mary.json","a");
   	for(c = 1; c<482; c++) {
		if(c%2!=0){fprintf(d,"{");}
        	if(hashArray[c] != NULL){
        		fprintf(d," %s:%s ,",hashArray[c]->obj,hashArray[c]->info);
			if(c%2==0){fprintf(d," id:%d }\n",t);t++;}
   		}
	}
   	fclose(d);
}

int yywrap()
{ return(1); }

int main() {
    	yylex();
	display();
}


