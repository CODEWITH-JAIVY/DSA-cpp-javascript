#include<iostream>
using namespace std ;

class List  {
    public :
    int data  ;
    List*next  ;

    List( int data ) {
     this-> data  = data ;
      next  = NULL ;

    }
} ;

class Solution {
 
   public :
   List *head   ;
   Solution() {
    head = NULL  ;
   }   

    // display Lis telement 
  void display( List*head) {
    if(head == nullptr)  {
        cout<<"List is empty " ;
        return   ;
    }
    List *temp = head  ;
    while(temp != NULL   ) {
     cout<< temp->data  << " -> " ;
        temp = temp->next ;  
    }
}

   List*addElement (List*& tail ) {
    int data  , choice  =1  ;
    while ( choice) {
     cout<< "Enter data " ;
     cin >> data  ;

     List*node = new List(data) ;
    
     if( head == NULL ) {
        head  = node  ;
        tail = node  ;
     }
     else  {
        tail->next  = node ;
        tail  = node  ;

     }
     cout <<"Do you want  to continue ( yes 1  & no 0 )" ;
     cin >> choice ;
    }
    return  head; 
   }

   ~Solution() {
    List*temp = head ;
    while(temp != NULL ) {
        List*nextNode = temp->next ;
        delete temp  ;
        temp = nextNode ;
    }
   }
     // Delete All funtion 
     
     List* DeleteATbegin(List*head ) {
       if ( head == nullptr) {
        cout<< "List  is empty nothing to delete  " ;
       }
       List*Temp = head ;
       head = head->next ;
       delete Temp ;
       display(head) ; 
     }
      
      List*DeleteAtEnd (List*head) {
      
      }
      
      List*DeleteAtspecif( List*head){
      
      }


     

   List*DeleteFunction(List*head ) { 

      int choice ;
      cout<< "Menu " << endl ;
      cout<<" 1 : Delete at begin " << endl ;
      cout<< "2 : delete  at the end " << endl  ;
      cout<<"3 : Delete at Specific  " << endl  ;

      cout<<"Enter your choice " ; 
      cin>> choice  ; 

      switch(choice) {
        case 1  :
          DeleteATbegin(head ) ;
          break; ;
        case 2 :
          DeleteAtEnd(head) ;
          break;
        case 3 :
          DeleteAtspecif(head) ;
      }
   }
};

int main () {
    Solution Sol ;
    List *tail =NULL ;

     List*head = Sol.addElement(tail) ;
     Sol.display(head) ;
     Sol.DeleteFunction(head)  ;
     return  0   ;  
}