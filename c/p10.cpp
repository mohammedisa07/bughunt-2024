//CPP program to implement circular linked list

#include<bits/stdc++.h>
using namespace std;
struct node{            //defining the structure of the node
    int data;
    struct node *next;
};
//class definition for circular linked list
class CLL{       
private:
    struct node *tail;
public:
    CLL(){
        this->tail=NULL;    //constructor to initialize the tail pointer
    }
    void insert(int,bool);
    void deletenode();    //member function
    void display();
    ~CLL(){         //destructor to delete the list
        struct node *ptr=tail->next;
        while(ptr!=tail){
            struct node *temp=ptr;
            ptr=ptr->next;
            delete temp;
        }
        delete ptr;
    }
};
//member function definitions
void CLL::insert(int a,bool x)
{
    struct node *temp=new struct node;
    temp->data=a;
    temp->next=nullptr;
    if(tail==nullptr){
        tail=temp;
        tail->next=temp;
        return;
    }
    temp->next=tail->next;
    tail->next=temp;
    if(x){
        tail=temp;
    }
}

//delete function to delete at end
void CLL::deletenode()
{
    if(tail==nullptr)
    {
        cout << "Invalid, List is already empty" << endl;
        return;
    }
    if(tail->next==tail)
    {
        struct node *ptr=tail;
        tail=nullptr;
        delete ptr;
        return;
    }
    struct node *temp=tail;
    struct node *ptr=tail->next;
    while(ptr->next!=tail)
        ptr=ptr->next;
    ptr->next=tail->next;
    tail=ptr;
    delete temp;
    return;
}

//display function to display the list
void CLL::display()
{
    if (tail==nullptr)
    {
        cout << "List is empty" << endl;
        return;
    }
    struct node *ptr=tail->next;
    while(ptr->next!=tail->next)
    {
        cout << ptr->data << " -> ";
        ptr=ptr->next;
    }
    cout << ptr->data << endl;
}

int main(){
    int choice=1;CLL list1;
    //menu driven program
    do{
        cout << "1.Insert"<<endl;
        cout << "2.Delete"<<endl;
        cout << "3.Display"<<endl;
        cout << "4.Exit the menu"<<endl;
        cout << "Enter your choice: ";
        cin>> choice;
        int a,b;bool x;
        switch(choice)
        {
            case 1:{
                cout << "Enter the element to be inserted: ";
                cin>>a;
                cout << "0. Insert the element at beginning"<<endl;
                cout << "1. Insert the element at end"<<endl;
                cout << "Choice: ";
                cin>>choice;
                if(choice==0 || choice==1)   //inserting at beginning or end
                {
                    x=choice;
                    list1.insert(a,x);
                    choice=-1;
                }
                else{
                    cout << "Invalid choice" << endl;
                }
                break;
            }
            case 2:{            //deleting at end
                list1.deletenode();
                break;
            }
            case 3:{         //displaying the list
                cout << "List"<<endl;
                list1.display();
                break;
            }
            case 4:{         //exiting the menu
                cout << "Exiting the menu..."<<endl;
            }
            default: cout << "Invalid choice"<<endl; break;
        }
    }while(choice!=4);
}
