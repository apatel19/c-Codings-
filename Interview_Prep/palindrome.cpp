#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
	string s = to_string (x);     
   	int length = s.length();
	string reverse;
	int in = 0;
	for (int i = length - 1; i >= 0; i--){
		reverse[in] = s[i];
		in = in + 1;
	}
	if (strcmp(s.c_str(), reverse.c_str()) == 0) {
	return true;
	}
	else {
	return false;
	}
    }	
};

int main (int argc, char **argv) {

int scanedIn; 
cin >> scanedIn;

Solution answer;
bool trueOrFalse;

trueOrFalse = answer.isPalindrome (scanedIn);
cout << trueOrFalse << endl;

return 0;
}

