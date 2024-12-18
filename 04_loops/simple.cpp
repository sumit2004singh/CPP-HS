// 1. While Loop
// Challenge: Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.

// #include <iostream>

// using namespace std;

// int main(){
//     int teaCups;

//     cout << "Enter the number of cups of tea to be served : " ;
//     cin >> teaCups;

//     //while loop
//     while (teaCups > 0){
//         teaCups--;//decrement
//         cout << "A cup of tea has been served \n" << teaCups << " cups remaining." << endl;
        
//     }

//     cout << "All cups have been served." << endl;

//     return 0;
// }

 //2. Do-While Loop
// Challenge: Create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-insensitive), using a do-while loop.

// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     string response;
    
//     do {
//         cout << "Do you want more tea ? (yes/no)" << endl;
//         getline(cin , response);
//     } while (response != "no" || response != "No" || response != "NO");
    
    
//     return 0;
// }

//3. For Loop
// Challenge: Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.


// #include  <iostream>
// #include <string>

// using namespace std;

// int main() {

//     int teaCups = 5;
    
//     for (int i = 1; i <= teaCups; i++){
//         cout << "Brewing cup of tea " << i << endl;
//     }

//     return 0 ;
// }

//4. Break Keyword
// Challenge: Write a program that keeps serving tea until the user says they’ve had enough (input 'stop'). Use a break statement to exit the loop when the user types 'stop'.

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {

//     string response ;

//     while(true){
//         cout << "Do you want more tea ? (Type 'stop' to quit)" << endl;
//         getline(cin , response);

//         if(response == "stop"){
//             //exit the loop
//             break;
//     }

//     cout << "here is your cup of tea " << endl;
//     }

//     return 0 ;
// }

//5. Continue Keyword
// Challenge: Write a program that skips brewing green tea if the user dislikes it. Use a continue statement to skip over green tea but brew other types of tea in a list.

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string teaTypes[12] = {"Green Tea" , "Black Tea" , "White Tea" , "Oolong Tea" , "Milk Tea" , "orange Tea" , "chamomile Tea" , "pomegranate Tea" , "ginger Tea" , "sandalwood Tea" , "rose Tea" , "mint Tea"};
    
//     for(int i = 0; i < 12; i++){
//         cout << "Brewing " << teaTypes[i] << endl;

//         if(teaTypes[i] == "Green Tea"){
//         continue;
//     }
     
//     }

//     return 0;
// }

//6. Nested Loops
// Challenge: Write a program that brews multiple cups of different types of tea. For each type of tea, brew 3 cups using a nested loop.

// #include <iostream>
// #include <string>
// using namespace std;    

// int main() {

//     string teaTypes[12] = {"Green Tea" , "Black Tea" , "White Tea" , "Oolong Tea" , "Milk Tea" , "orange Tea" , "chamomile Tea" , "pomegranate Tea" , "ginger Tea" , "sandalwood Tea" , "rose Tea" , "mint Tea"};

//     for(int i = 0 ; i < 12 ; i++){
//         cout << "brewing " << teaTypes[i] << endl;

//         for(int j = 1 ; j <= 3 ; j++){
//             cout << "Brewing cup " << j << " of " << teaTypes[i] << endl;
//         }
//     }
//     return 0;
// }