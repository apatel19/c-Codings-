//What we want to build.
/*

* 
* * 
* * *
* * * *
* * * * *

*/

#include <iostream>
#include <cstdlib>

using namespace std;
int main () {

int i , j = 0;

for (i = 0; i < 6; i++){
	for (j = 0; j < i; j++) {
cout << "x ";
}
cout << endl;
}

/*
----
* * * * *
* * * *
* * * 
* *
*
---
*/
cout << endl;
cout << "--------------";
cout << endl;
i = 0, j = 0;
for (i = 5; i > 0; i--) {
for (j = i; j > 0; j--) {
	cout << "x ";
}
cout << endl;
}

cout << endl;
cout << "--------------";
cout << endl;

/*
* * * * *
  * * * *
    * * *
      * *
        *
*/
j = 0, i = 0;
for (i = 0; i < 5; i++) {
for (j = 0; j < 5; j++) {
if (j >= i) {
cout << "x ";}
else {
cout << "  ";
}
}
cout << endl;
}

cout << endl;
cout << "--------------";
cout << endl;

/*
        *
      * *
    * * *
  * * * *
* * * * *

*/

j = 0, i = 0;

for (i = 6; i > 0; i--){
for (j = 0; j < 6; j++){
if (j >= i) {
cout << "x ";
}
else cout << "  ";
}
cout << endl;
}

cout << endl;
cout << "--------------";
cout << endl;

/*
      *     
    * * *  
  * * * * *
* * * * * * * 

*/
j = 0, i = 0;

for (i = 0; i < 7; i++){
for (j = 7; j > 0; j--){
if (j < i) {
cout << "x ";
}
else cout << " ";
}
cout << endl;
}

return 0;
}
