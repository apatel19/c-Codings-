#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Solution {
public:
    int reverse(int x) {
	string straight = to_string(x);
	int length = straight.length();
	string reverse;
	int inPlace = 0;
	if (straight[0] == '-') {
		reverse[inPlace] = '-';
		inPlace = inPlace + 1;
		for (int i = length-1; i >= 1; i--) {
		reverse[inPlace] = straight[i];
		inPlace = inPlace + 1;
		}
	int rightAnswer = atoi(reverse.c_str()); 
	return rightAnswer;
	}
	else 
	{
		for (int i = length-1; i > -1; i--) {
                	reverse[inPlace] = straight[i];
                	inPlace = inPlace + 1;
                	}
	        int rightAnswer = atoi(reverse.c_str());
        	return rightAnswer;

	}        
    }
};

int main () {

int scanedIn;
cin >> scanedIn;

Solution answer;

int an = answer.reverse(scanedIn);
cout << an << endl; 
return 0;
}
