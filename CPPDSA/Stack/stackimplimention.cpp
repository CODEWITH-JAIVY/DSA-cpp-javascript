#include<iostream>
using namespace std ;

class StackImpimatation {
 
 int top  ;
 static const int  Size  = 4  ; 
  int Stack[Size] ;

 public :

 StackImpimatation(){
    top  = -1  ; 
 }
 void PushOperataion(int data  ) {
   if( top == Size -1  ) {
    cout<<"Stack is full " ;
    return  ;  
   }
  
    top ++ ;
    Stack[top] = data  ;
    cout<<"Push data is " << data  << endl  ; 
   
 }

 // pop Operation 
 void PopOperaion() {
    if(top == -1 ) {
        cout<< "STack is empty " ;
        return    ;
    }
    
        int temp = Stack[top] ;
        top -- ;
        cout<< " pop data is " << temp << endl ;
    
 }

 void topElement  () {
    if( top == -1 ) {
        cout<<"STAck is empty " ;
        return  ;

    }
    
        int temp = Stack[top] ;
        cout<<  "Top Element is " << temp << endl  ;

    } 
 

 void IsEmpty() {
    if(top == -1 ) {
        cout<<"STAck is  empyt "  <<endl ;
       
    }
    else {
        cout<< "STack is  not empty  "  ;
      

    }
 }
 void display() {
    if( top == -1 ) {
        cout<<"STack is  empty noting to  dispplay " << endl ;
        return   ; 
    } 
    else  {
        while( top   != 0) {
            cout<<Stack[top]  << endl  ;
            top --  ;  
         }
    }

 }
} ; 
int main () {

    StackImpimatation  s  ;
    s.PushOperataion(1) ;
    s.PushOperataion(2) ;
    s.PushOperataion(3) ;
    s.PushOperataion(4) ;
    s.PushOperataion(5) ;
    s.IsEmpty () ;
    s.PopOperaion() ;
    cout<<"Stack element are " <<endl  ; 
    s.display() ; 
    s.topElement() ; 
    return 0  ; 

}
