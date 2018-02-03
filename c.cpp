#include<iostream>
#include<stack>
using namespace std;

stack <int> s;
class list
{
    private:
       struct node{
           int data;
            struct node *next;
           }*start,*temp, *newnode, *temp1;
       int x,i,n,y,num;
       
    public:
       list();
       int accept();
       void display()
       int mdd();
       int middle();
};

list::list(){
    start=NULL;
}

int list::accept(){
cout<<"enter the no of nodes"<<endl;
cin>>n;
for(i=0;i<n;i++){
 cout<<"enter the data"<<endl;
 cin>>x;
    if(start==NULL){
       start=new node;
       start->data=x;
       start->next=NULL;
       s.push(start->data);
     }
     else{
       temp=start;
       while(temp->next!=NULL)
       {
       temp=temp->next;
       }
       newnode=new node;
       newnode->data=x;
       newnode->next=NULL;      
       temp->next=newnode;
       s.push(newnode->data);
       }       
     }
     cout<<s.size();
     return 0;
}
void list::display()
{
temp=start;
cout<<"the element are->";
while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
       }
       cout<<endl; 
}
int list::mdd()
{
cout<<"the middle element==>";
for(i=0;i<(s.size()/2);i++){
s.pop();
}
cout<<s.top()<<endl;
}
int list ::middle()
{
temp=start;
temp1=start;
while(temp1->next!=NULL){
temp=temp->next;
temp1=temp1->next->next;
}
cout<<temp->data;
}
int main()
{
       list si;
       si.accept();
       si.display();
       si.mdd();
       si.middle();
}



