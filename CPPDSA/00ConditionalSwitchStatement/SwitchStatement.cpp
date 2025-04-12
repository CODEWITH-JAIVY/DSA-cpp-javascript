/*
#include<iostream>
using namespace std;

int main() {
    int choice;

    while (true) { // infinite loop
        cout << "Enter your choice (1-3), or 0 to exit: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You selected option 1\n";
                break;
            case 2:
                cout << "You selected option 2\n";
                break;
            case 3:
                cout << "You selected option 3\n";
                break;
            case 0:
                cout << "Exiting loop...\n";
                return 0;  // ✅ Method 1: completely exits the program
                // or use: break out of the loop (see Method 2 below)
            default:
                cout << "Invalid choice.\n";
        }
    }
     cout<<"Before Exiting " ; // if the programe will reach on line number 23 than it will be not reach here  
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main() {
    int choice;
    bool running = true;

    while (running) {
        cout << "Enter your choice (1-3), or 0 to exit: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Option 1\n";
                break;
            case 0:
                cout << "Exiting...\n";
                running = false; // ✅ breaks the loop
                break;
            default:
                cout << "Other option\n";
        }
    }

    return 0;
}

*/

/*
#include <iostream>
#include <cstdlib>  // Required for exit()
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Say Hello\n";
        cout << "2. Do something\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Hello!\n";
                break;
            case 2:
                cout << "Doing something...\n";
                break;
            case 0:
                cout << "Exiting using exit()...\n";
                exit(0);  // ✅ This will terminate the program immediately
            default:
                cout << "Invalid option.\n";
        }
    }

    return 0; // This line will never be reached if exit(0) is used
}
*/


// //🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️🖊️
//  // question  int case of swithch case can we use continue () 
//   ❤️❤️❤️❤️❤️❤️❤️ if the continue statement is available on the
// the only in swithc statement than it not valid 
// but in the case of continue present in the switch statement and switch are present 
// in the loop than it's valid


// #include<iostream>
// using namespace std  ;

// int main() {
//   int exprestion  ;
//   cout<<"Enter your choice " ;
//    switch (exprestion)
//    {
//    case 1 : 
//       cout<<"Option 1 " ;
//       break;
//     case 2 :
//       cout<<"Option 2 " 
//       continue ;
//     break;
   
//    default:
//    cout<<"it is defalt " ;
//     break;
//    }
// return 0  ;  

// }
#include<iostream>
using namespace std;

int main() {
    int expression;

    while (true) { // ✅ Loop so continue makes sense
        cout << "\nEnter your choice (1, 2, or 0 to exit): ";
        cin >> expression;

        switch (expression) {
            case 1:
                cout << "Option 1\n";
                break;
            case 2:
                cout << "Option 2\n";
                continue; // ✅ Goes back to the top of the while loop
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "It is default\n";
        }

        break; // exits the while loop after switch
    }

    return 0;
}
