#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	char task[50];
	struct node *next;
};
struct node *head;
void add_items(char name[]){
	struct node *n =(struct node*)malloc(sizeof(struct node));
	strcpy(n->task,name);
	n->next = NULL;
	if(head == NULL){
		head = n;
	}else{
		struct node *ptr = head;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = n;
	}
	
} 
void remove_items(){
	
}
void create_file(){
	
}
void print(){
	struct node *ptr =head;
	printf("So Your List Is:\n");
	while(ptr != NULL){
		printf("%s\n",ptr->task);
		ptr = ptr->next;
	} 
}
void delete_list(){
	struct node *temp;
	while(head != NULL){
		temp = head;
		head = head->next;
		free(temp);
	}
	printf("Deleted the list successfully.");
}
void main(){
	head = NULL;
	int n,i;
	char name[20];
	char choice1[3];
	char choice2[3];
  printf("\t\t\t\t\t\t Welcome To TODO \n");
  printf("Enter The Number Of Tasks\n");
  
  scanf("%d",&n);
  printf("What Are They?\n");
  for(i=0;i<n;i++){
  	 scanf("%s",name);
  	  add_items(name);
  }
  printf("Your Tasks Have Been Added\n");
  printf("Would You Like To Check Your Tasks?");
  scanf("%s",choice2);
  if(strcmp(choice2,"yes")==0){
  	print();
  }
  
  printf("Would You Like To Clear Your List?\n");
  scanf("%s",choice1);
  if(strcmp(choice1,"yes") == 0){
  	delete_list();
  }
  else{
  	printf("List Saved");
  }
  
	
}
