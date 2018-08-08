#include "List.h"
#include<stdio.h>
#include<stdlib.h>

int size(node *head)
{
	static int coun=0;
	if(head==NULL)
	return count;
	count++;
	return size(head->next);
}

int siEmpty(node *position)
{
	if(position == NULL)
	return 1;
	return0;
}

int isFirst(nodec *list,node *position)
{
	if(list == position)
	return 1;
	return 0;
	
}

int isLast(node *list,node *position)
{
	if(position->next == NULL)
	return 1;
	return 0;
}

node *first(node *list)
{
	return list;
}

node *last(node *list)
{
	if(list  == NULL)
	return list;
	while(list->next != NULL)
	list = list->next;
return list;
}

node *before(node *list,node *position)
{
	if(list == NULL || isFirst(list,position))
	return NULL;
	
	while(list->next != position)
	 list = list->next;
	 
	 return list; 
}

node *after(node *list , node *position)
{
	if(list == NULL || isLast(list,position))
	return NULL;
	
	while(list != position)
	list = list->next;
	
	return list->next;
}
void replaceELement(node *position,int key)
{
	if(position != NULL)
	position->value=key;
	return ;
	
}
void swapElement(node position1,node *position2)
{
	int temp;
	temp=position->value;
	position->value=position2->value;
	position2->value=temp;
	return  ;
}

void *insertBefore(node list,node *position,int value)
{
	node *prev;
	node *new_node;
	if(position == NULL)
	return NULL;

new_node =(node *)malloc(sizeof(node));
new_node->value=value;
prev=before(list,position); 	 
if(prev == NULL)
{
	new_node->next = position;
	return new_node;
}
prev->next = new_node;
new_node->next=position;

return new_node;
}
void insertAfter( node *list,node *positionint ,int value);
{
node * following;
node * new_node;
if(position == NUll)
return;
new_node=(node *) malloc(sizeof(node));
new_node->value=value;
following = after(list,position);
if(following == NULL)
{
	position->next = new_node;
	return ;
}

new_node->next=following;
position->next=new_node;
return ;


}


void insertFirst(node *first,int value)
{
	return insertFirst(first,first,value)
}
void insertLast(int);
{
	insetAfter(list,last(list),value);
	return ;
}

node *eliminate(node *list,node *position)
{
	node *pred,*succ;
	pred = before(list,position);
	succ = after(list , position);
	if(pred == NULL)
	{
		free(position);
		return(succ);
	}
if(succ == NULL)
{
	pred->next=NULL;
	return pred;
}
}
