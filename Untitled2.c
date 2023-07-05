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

void addNode(char *song){
// list empty
if (head==NULL){
	
	struct nodepl *newmus= (struct nodepl *)malloc(sizeof(struct nodepl));
	newmus->song=(char*)malloc(strlen(song)+1);
    strcpy(newmus->song,song) ;
	newmus->next=NULL;
	head=tail=newmus;
}
// list full
else{
	struct nodepl *newmus=(struct nodepl *)malloc(sizeof(struct nodepl));
	newmus->song=(char*)malloc(strlen(song)+1);
	strcpy(newmus->song, song);
	newmus->next=NULL;
	tail->next=newmus;
	tail=newmus;
	
}
}
//remove
void removeNode(char *song)
{
	struct nodepl *pre=NULL;
	struct nodepl *firstSong=head;
	//list empty 
	if(head==NULL){
		printf("Your list is empty!You can't delete song.\n");
		return;
	}
	//list full
	if (strcmp(head->song, song) == 0){
		struct nodepl *delSong=head;
		head=head->next;
		free(delSong);
		return;
	}
	//find song
	 while (firstSong != NULL && strcmp(firstSong->song, song) != 0){
		pre=firstSong;
		firstSong=firstSong->next;
		
	}//song is not in the list
	if(firstSong==NULL){
		printf("This song is not aveilable in this list.\n");
		return;
	}
	
	//last song
	if(tail==firstSong){
		tail=pre;
	}//remove song
	pre->next=firstSong->next;
	free(firstSong->song);
	free(firstSong);

	}
void printSong(){
	struct nodepl *firstSong=head;
	while(firstSong!=NULL){
		printf("%s\n",firstSong->song);
	   firstSong=firstSong->next;
	}
		
}
int main(){
addNode("quenn");
addNode("under tree");
addNode("lonliest");
printSong();
removeNode("lonliest");
printSong();


	return 0;
}
