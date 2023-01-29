//Natthaporn jaimon no.65543206055-7 sec.3
//https://youtu.be/ytb52zRDESw
#include <stdio.h>
struct Node
{
	int id;
	struct Node *next;
};

struct Node *AddNode(struct Node **walk, int newid);
void ShowAll(struct Node *walk);
void UpdateNode(struct Node **walk,int id1, int newid);
struct Node *ShowBack(struct Node *walk);
void SwapNode(struct Node **walk,int id,int temp);

int main(){
	struct Node *start;
    start = NULL;
    AddNode(&start, 101);
    AddNode(&start, 201);
    AddNode(&start, 301);
    AddNode(&start, 401);
    ShowAll(start);
    UpdateNode(&start, 201, 501);
    ShowAll(start);
    //start = ShowBack(start); 
    //ShowAll(start);
    SwapNode(&start, 101, 301);
    ShowAll(start);
    return 0;
}

struct Node *AddNode(struct Node **walk, int newid)
{
    while (*walk != NULL)
    {
        walk = &(*walk)->next;
    }
    *walk = new struct Node;
    (*walk)->id = newid;
    (*walk)->next = NULL;
    return *walk;
}

void ShowAll(struct Node *walk)
{
	while (walk != NULL)
    {     
        printf("%d  ", walk->id);
        walk = walk->next;
    } 
    
    printf("\n");
} 

void UpdateNode( struct Node **walk,int id1, int newid )
{
	while ((*walk)->id != id1)
    {
        walk = &(*walk)->next;
    }

    //((*walk)->id, newid);
    (*walk)->id = newid;
	
}

struct Node *ShowBack(struct Node *walk)
{
	struct Node *before = NULL;
	struct Node *next = NULL;
	while(walk != NULL) {
		next = walk->next;
		walk->next = before;
		before = walk;
		walk = next;
	}
	walk = before;
	return walk;
}

 void SwapNode(struct Node **walk,int id,int temp) {
	while(*walk != NULL) {
		if((*walk) -> id == id) {
			(*walk) -> id = temp ;
		}
		else if((*walk) -> id == temp) {
			(*walk) -> id = id ;
		}
		walk = &(*walk) -> next ;
	}
}
