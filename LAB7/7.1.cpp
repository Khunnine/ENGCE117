#include <stdio.h>
#include <string.h>

struct studentNode {
 char name[ 20 ] ;
 int age ;
 char sex ;
 float gpa ;
 struct studentNode *next ;
} ;

class LinkedList{
 	protected :
  		struct studentNode *start, **now ;
 	public :
  		LinkedList(); //??????????????????? start ??? now
  		~LinkedList(); //??????????????????????????????????????????
  		void InsNode( char n[], int a, char s, float g ); //????????????????????????????????
  		void DelNode(); //??????????????
  		void GoNext(); //????????????????????????????????????
  		virtual void ShowNode() ; //????????????????????????
} ; // End class

class NewList : public LinkedList {
 	public :
  		void GoFirst() ; //???????????????????????????????????????
  		virtual void ShowNode() ; //????????????????????????????????????????????
} ; // End class


int main() {
 LinkedList listA ;
 NewList listB ;
 LinkedList *listC ;

 listA.InsNode( "one", 1, 'A', 1.1 );
 listA.InsNode( "two", 2, 'B', 2.2 );
 listA.InsNode( "three", 3, 'C', 3.3 );
 listA.GoNext() ;
 listA.ShowNode() ;

 listB.InsNode( "four", 4, 'D', 4.4 ) ;
 listB.InsNode( "five", 5, 'E', 5.5 ) ;
 listB.InsNode( "six", 6, 'F', 6.6 ) ;
 listB.GoNext() ;
 listB.DelNode() ;
 listB.ShowNode() ;

 listC = &listA;
 listC->GoNext() ;
 listC->ShowNode() ;

 listC = &listB ;
 listC->ShowNode() ;

 return 0 ;
}//end function 

LinkedList :: LinkedList() {
  start = NULL;
  now = &start;
}
LinkedList :: ~LinkedList() {
  struct studentNode *temp = start;
    while(temp != NULL) {
      start = start->next;
      delete temp;
      temp = start;
    }
  } 
void LinkedList :: InsNode( char n[], int a, char s, float g ) {
  struct studentNode *ins = new studentNode;
  strcpy( ins->name, n );
  ins->age = a;
  ins->sex = s;
  ins->gpa = g;
  ins->next = *now;
  *now = ins;
}

void LinkedList :: DelNode() {
  struct studentNode *temp = *now ;
  *now = (*now)->next ;
  delete temp ;
}


void LinkedList :: ShowNode(){
    printf( "%s", (*now)->name );
    printf( " %d", (*now)->age );
    printf( " %c", (*now)->sex );
    printf( " %.2f\n", (*now)->gpa );
    
}

void LinkedList :: GoNext() {
  *now = (*now)->next;
}

void NewList::GoFirst(){
  this->now = &(this->start);
}

void NewList::ShowNode(){
	GoFirst();
    while(*now != NULL){
        printf( "%s", (*now)->name );
        printf( " %d", (*now)->age );
        printf( " %c", (*now)->sex );
        printf( " %.2f\n", (*now)->gpa );
        GoNext();
    }
}
