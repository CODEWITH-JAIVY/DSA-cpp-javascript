// find the fibonachi series of a number 
// for the number of  5   number 
 //  1 2 3 5 8 

 #include<iostream>
 using namespace std  ;

 class Solution { 
    public :
    int Fibonachi(int i) {
          
    if (i == 0 ) return 0  ;
    if(i == 1 )  return  1  ;
    return Fibonachi(i-1) +Fibonachi(i-2 ) ;
    }
    void PrintFinochiseries(int num ) {
       if ( num <= 0 ) {
        cout<< "Generate more than "<< 0 << "term " ;
        return ;
       }
      
       
       for( int i =0 ;i<num   ; i++  ) {
         cout<<  Fibonachi(i)  << " " ;
        }
        cout<<endl ; 
        
    }
 } ;
 int main () {
    Solution s  ;
    int num  ;  
    cout<< "Enter number  to find the   upto fibonachi searies "  ;
    cin>>  num  ;
    s.PrintFinochiseries(num) ;
    return  0  ; 
    
 }