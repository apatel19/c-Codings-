
#include <iostream>
#include <vector>

using namespace std;
vector<int>myAn;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
	int i = 0, j = nums.size() - 1;
        int myAnswer;
        
        while (i < j) {
            int sum = nums.at(i) + nums.at(j);
            if (sum > target) {
                j = j - 1;		
		}
            else if (sum < target) {
                i = i + 1;   
	     }
            else  {

                myAnswer = target;
                myAn.push_back(i);
                myAn.push_back(j);
		break;	  
            }
        }
return myAn;
}
};

int main(int argc, char **argv) 
{
  
    vector<int>Nums;
    Nums.push_back(4);
    Nums.push_back(7);
    Nums.push_back(4);
    Nums.push_back(19);

    int target = 8;
    
    vector<int>pair;
    Solution answer;
    
    pair = answer.twoSum (Nums, target);
   cout << pair.at(0) << " " << pair.at(1) << endl;     
    return 0;
}

