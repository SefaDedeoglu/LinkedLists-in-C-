#include "linked.h"
#include <iostream>

using namespace std;

linked::linked():head(0),size(0){
}
void linked::insert(const std::string& name){
	list* newNode = new list(name);
	if(head==0){
		newNode->name = name;
		head=newNode;
	}
	else
	{
		list* iter = head;
		list* trail = 0;
		int a,b;
		while(iter !=0)
		{
				trail=iter;
				iter=iter->next;
		}
		if(iter == head){
			newNode->next = head;
			newNode->name = name;
			head=newNode;
		}
		else{
			newNode->name = name;
			newNode->next = iter;
			trail->next=newNode;
		}
	}
	size++;
}
void linked::printList(){
	list* tp = head;
	while(tp!=0){
		if(tp->name!=" "){
		cout<<*tp<<endl;
	}
		tp = tp->next;
	}
}
void linked::deleteNode(const string& name){
	if(head==0){
		cout<<"Node silinemez cunku liste bos";
	}
	else{
		list* iter = head;
		list* trail = 0;
		
		while(iter!=0){
			if(iter->name==name){
				break;
			}
			else{
				trail = iter;
				iter=iter->next;
			}
		}
		if(iter==0){
			cout<<"Boyle bir node yok"<<endl;
		}
		else{
			if(head==iter){
				head = head->next;
				cout<<"Silindi"<<endl;
			}
			else{
				trail->next=iter->next;
				cout<<"Silindi"<<endl;
			}
			
		}
	}
}
void linked::Clear(){
		list* iter = head;	
		list* trail = 0;
		while(iter!=0){
			trail=iter;
			iter=iter->next;
		}
		head=trail->next;
	
}

int linked::Lenght(){
	int x=0;
	list* tp = head;
	while(tp!=0){
		if(tp->name!=" "){
			x++;
		}
		tp = tp->next;
	}
	return x;
}





