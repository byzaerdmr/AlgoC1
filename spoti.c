#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodepl {
	char *song;
	struct nodepl *next;
	
};

//head and tail

struct nodepl *head=NULL;
struct nodepl *tail=NULL;
// Add node

int addNode(int song){
// linkedl empty
if (head==NULL){
	
	struct nodepl *newmus= (struct nodepl *)malloc(sizeof(struct nodepl));
	newmus->song=song;
	newmus->next=NULL;
	head=tail=newmus;
}
// linkedl full
else{
	struct nodepl *newmus=(struct nodepl *)malloc(sizeof(struct nodepl));
	newmus->song=song;
	newmus->next=NULL;
	tail->next=newmus;
	tail=newmus;
	
	
}

	
return 1;	
	
}

int main(){
	
	addNode("Under the tree");
	addNode("Loneliest");
	
	
	
	
	return 0;
}













