#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
  int data;
  node* next;
};
node* head=NULL;
node* tail=NULL;
void insert(int value)
{
  node* new_node=new node();
  new_node->data=value;
  new_node->next=NULL;
  if(head==NULL)
  {
  head=new_node;
  tail=new_node;
   }
  else
  {
    tail->next=new_node;
    tail=new_node;
  }
}
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int value;
    cin>>value;
    insert(value);
  }
  int i,low,up;
  node* temp=head;
    while(temp!=NULL)
    {
      if(temp->data)
    }
  return 0;
}
