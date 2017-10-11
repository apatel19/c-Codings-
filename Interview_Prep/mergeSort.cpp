#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void merge (int *a, int low, int high, int mid){

int i, j, k, temp[high - low+1];

i = low;
k = 0;
j = mid+1;
//Merge Two parts into Temp[]
while (i <= mid && j <= high) {
if (a[i] < a[j]) {
temp[k] = a[i];
k++;
i++;	
}
else {
temp[k] = a[j];
k++;
i++;
}
}
//Insert all the remainings from i to mid into temp[]
while (i <= mid) {
temp[k] = a[i];
i++;
k++;
}
//Insert all the remainings from j to high into temp[]
while (j <= high) {
temp[k] = a[j];
j++;
k++;
}

//Sorted Data from temp to a

for (i = 0; i <= high; i++) {
a[i] = temp[i-low];
}
}


void mergeSort (int *randomArray, int low, int high) {
int mid;

if (low < high) {
mid = (low+high)/2;
mergeSort(randomArray, low, mid);
mergeSort(randomArray, mid+1, high);

merge(randomArray, low, high, mid);
}
}

int main () {
srand((int)time(0));
int randomNumbers[10]; 
int i = 0, size = 10;
for (i = 0; i < size; i++) {
	int x = rand() % 100;
	randomNumbers[i] = x;
}
for (i = 0; i < size; i++) {
cout << randomNumbers[i] << " "; 
}
cout << endl;
mergeSort(randomNumbers,0, size-1);

cout<<"\nSorted Data ";
	for (i = 0; i < 10; i++)
        cout<<"->"<<randomNumbers[i];
return 0;
}
