#include <iostream>
#include <cstdlib>

using namespace std;

void insertionSort(int array[], int i, int size){
int j, temp;
for (i = 0; i < size; i++) {
j = i;
while (j > 0 && array[j] < array[j - 1]) {
temp = array[j];
array[j] = array[j-1];
array[j-1] = temp;
j--;
		}		
	}
}
int main () {
int array[] = {6, 3, 9, 1, 0, 4};
int size = 6;
insertionSort (array, 0, size);
for (int i = 0; i < 6; i++) 
	cout << array[i] << " " ;
return 0;
}
