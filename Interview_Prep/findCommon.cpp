/*Given two sorted array A and B find Common elemets. They both are same lengths.

A = [13, 27, 35, 40 ,49, 55 ,59]
B = [17, 35, 39, 40, 55, 58, 60]
*/ 

#include <iostream>
#include <cstdlib>

using namespace std;

bool binarySearch (int a, int arrayB[]) {
int lowIndex = 0;
int upperIndex = 6;
int searchItem = a;
while (true) {
int currentIndex = (lowIndex + upperIndex) / 2;
if (arrayB[currentIndex] == searchItem){
        return true;
}
else if (lowIndex > upperIndex){
        return false ;
}
else {
 if ( arrayB[currentIndex] > searchItem) {
                    upperIndex = currentIndex - 1;
                } else {
                    lowIndex = currentIndex + 1;
                }
	}
}	
}


int main () {

int arrayA[] = {13, 27, 35, 40 ,49, 55 ,59};
int arrayB[] = {17, 35, 39, 40, 55, 58, 60};

//Brute Force Search O(n^2)
int i = 0, j = 0;
for (i = 0; i < 7; i++) {
for (j = 0; j < 7; j++) {
if (arrayA[i] == arrayB[j]) {
cout << arrayA[i] << " ";
}
}
}
cout << endl;

//Binary Search O(log n)
bool answerPrint = false;
for (i = 0; i < 7; i++) {
answerPrint = binarySearch (arrayA[i], arrayB);
	if (answerPrint == true) {
		cout << arrayA[i] << " ";

	}
}
return 0;
}

