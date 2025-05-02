#include<iostream>
#include<queue>
using namespace std ;

class QueueS {
 public :
int size =5  ; 
 queue<int> q  ;

 void pushOperation (int data ) {
    if(q.size() ==  size  ) {
      cout<<" Queue is full " << endl ;
      return  ;
    }
    q.push(data) ;
    cout<< "Insert data is " << data  << endl  ;
 }

 void PopOperation () {
    if ( q.empty ()  ) {
        cout<<"Queue is empthy there is nothing to delete  " << endl ;
        return   ;
    }
    int temp = q.front () ;
   q.pop () ;
   cout<<" there is no elemet to element " << endl ;
 }

 void display( ){
   while ( ! q.empty())  {
    cout<<q.front() << " " ;
     q.pop() ; 
   }
 }
} ;

int main(){
    QueueS q ;
    q.pushOperation(1) ;
    q.pushOperation(2) ;
    q.pushOperation(3) ;
    q.pushOperation(4) ;
    q.pushOperation(5) ;

    q.PopOperation() ;
    q.PopOperation () ;
     q.display () ;
     return 0 ; 

}