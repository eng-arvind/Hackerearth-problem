#include<stdio.h>
struct node{
int data;
struct node *next;
};
struct node* head;
struct node* head2;

struct node* create(int data)
{
struct node* new_node = (struct node*)malloc(sizeof(struct node));
new_node->data = data;
new_node->next = NULL;
return new_node;
}
void insert(int num){
struct node *new_node,*temp=head;
if(head==NULL){
new_node=create(num);
head=new_node;
return;
}
new_node=create(num);
while(temp->next != NULL){
temp=temp->next;
}
temp->next=new_node;
}
void tempInsert(int num){ //Inserting elements in reverse order in second list
struct node *new_node;
if(head2==NULL){
new_node=create(num);
head2=new_node;
return;
}
new_node=create(num);
new_node->next=head2;
head2=new_node;
}
void display(){
int flag=0;
while(head != NULL){
if(head->data%2==1){
while(head2!=NULL){
printf("%d ", head2->data);
head2=head2->next;
}flag=0;
printf("%d ", head->data);
}else{
tempInsert(head->data);
flag=1;
}head=head->next;
}if(flag==1){
while(head2!=NULL){
printf("%d ", head2->data);
head2=head2->next;
}flag=0;
}
}

void main(){
head=NULL;
head2=NULL;
int n,i,num;
scanf("%d", &n);
for(i=0; i<n; i++){
scanf("%d", &num);
insert(num);
}
display();
}
