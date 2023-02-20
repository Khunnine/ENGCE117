#include <stdio.h>
#include <string.h>

struct studentNode {
 char name[ 20 ] ;
 int age ;
 char sex ;
 float gpa ;
 struct studentNode *next ;
 struct studentNode *back ;
} ;

void ShowAll( struct studentNode *walk ) ;
struct studentNode *AddNode( struct studentNode **walk, char n[], int a, char s, float g ) ;
void InsNode(struct studentNode *ins, char n[], int a, char s, float g) ;
void GoBack( struct studentNode **back ) ;
void DelNode( struct studentNode *del ) ;

int main() {
 struct studentNode *start, *now ;
 start = NULL ;
 now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
 now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
 InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( start ) ;
 InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( start ) ;
 GoBack( &now ) ;
 DelNode( now ) ; ShowAll( start ) ;
 DelNode( now ) ; ShowAll( start ) ;
 DelNode( now ) ; ShowAll( start ) ;
 return 0 ;
}//end function

void ShowAll( struct studentNode *walk ) {
 while( walk != NULL ) {
  printf( "%s ", walk->name ) ;
  walk = walk->next ;
 }//end while
 printf( " " ) ;
}//end function

struct studentNode *AddNode( struct studentNode **walk, char n[], int a, char s, float g ) {

    struct studentNode *temp = NULL;
	while( *walk != NULL ){
		temp = *walk; 
		walk = &(*walk)->next;
	}
	*walk = new struct studentNode;
	strcpy((*walk)->name, n);
	(*walk)->age = a;
	(*walk)->sex = s;
	(*walk)->gpa = g;
	(*walk)->next = NULL;
	(*walk)->back = temp;
	return *walk;
}
void InsNode(struct studentNode *ins, char n[], int a, char s, float g){
	ins->back->next = new struct studentNode;
	strcpy(ins->back->next->name, n);
	ins->back->next->age = a;
	ins->back->next->sex = s;
	ins->back->next->gpa = g;
	ins->back->next->next = ins;
	ins->back->next->back = ins->back;
	ins->back = ins->back->next;
}
void GoBack( struct studentNode **back ) {
  *back = (*back)->back;
} 

void DelNode( struct studentNode *del ){
	struct studentNode *temp;
	del->back->next = del->next;
	if( del->next != NULL ){
		del->next->back = del->back;
		temp = del->next;
	}else{
		temp = del->back;
	}
	delete del;
	del = temp;
} 



