#include <iostream>
using namespace std;
  
int main(){
#include <iostream>
using namespace std;

class GFG {
public:
	int findStep(int n)
	{
		if (n == 0)
			return 1;
		else if (n < 0)
			return 0;

		else
			return findStep(n - 3) + findStep(n - 2)
				+ findStep(n - 1);
	}
};

int main()
{
	GFG g;
	int n ;
	cout<<"Enter no of steps";
	cin>>n;
	cout << g.findStep(n);
	return 0;
}
    int input[100], count, i, num;
    cout << "Enter Number of Elements in Array\n";
    cin >> count;
    cout << "Enter " << count << " numbers \n";
    fo
    }
    cout << "Enter a number to serach in Array\n";
    cin >> num;
    for(i = 0; i < count; i++){
        if(input[i] == num){
            cout << "Element Location " << i+1;
            break;
        }
    }
    if(i == count){
        cout  << "Element Not Present in Input Array\n";
    }

    return 0;
}r(i = 0; i < count; i++){
        cin >> input[i];
