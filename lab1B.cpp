#include <iostream>
using namespace std;

int main()
{	
	int x;//cin number
	int n;//count of forloop
	std::cout << "Please input any number： ";//instruction
        cin >> x  ;//cin number
	cout << "The number you choose is " << x << endl;//show cin number

	for (n = 1; n >0; n++){//for loop
				
			if (x % 2 == 0){//the even number
				x = x / 2;//calculation of the kind
				cout << " " << x;//print the result
			}//end if

			else{//the odd number
				if (x == 1){//to fit the ask of question
					break;//break the loop
				}
				else {//the odd number
					x = 3 * x + 1;//calculation of the kind
					cout << " " << x;//print the result
				}
			}
		}
	
	return 0;
}
