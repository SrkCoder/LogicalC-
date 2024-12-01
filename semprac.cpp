#include<iostream>
using namespace std;
 class Data{
 	public:
 		int data;
 		public:
 			void setdata(int Xdata){
 				data=Xdata;
 				
			 }
 		
		 };
		 
		 class Node{
		 	public:
		 	Data nodedata;
		 	Node* next;
		 };
		 
		 class Linklist{
		 	private:
		 		Node* head=NULL;
		 	public:
			 void insert(Data obj){
			 	Node* new_node=new Node();
			 	Node* temp=new_node;
			 	temp->nodedata=obj;
			 	if(head==NULL){
			 		head=temp;
				 }else{
				 	while(temp){
				 		temp=temp->next;
					 }
					 temp=new_node;
				 }
			 }
			 
			 void display(){
			 	Node* temp=head;
				 while(temp){
				 	cout<< "that is node data"<<temp->nodedata.data;
				 	temp=temp->next;
				 } 
			 }	
		 };

int main() {
	Data obj;
	int data;
	cout<<"enter data";
	cin>>data;
	obj.setdata(data);
	Linklist list;
	list.insert(obj);
	list.display();
	
	
	
return 0;}
