#include <iostream>
using namespace std;
int main()
{
	int num;
	int result;
	int x;
	cout << "choose the number of your function >> \n 1 ~ 5x+2 \n 2 ~ x^2+3x \n 3 ~ 6x-10 \n 4 ~ 3x+4" << endl;
	cin >> num;
	cout << "enter <X>" << endl;
	cin >> x;
	switch (num)
	{
	case 1:
		result = (5 * x) + 2;
		cout << "your result is -- " << result << endl;
		break;
	case 2:
		result = (x * x) + (3 * x);
		cout << "your result is -- " << result << endl;
		break;
	case 3:
		result = (6*x)-10;
		cout << "your result is -- " << result << endl;
		break;
	case 4:
		result = (3*x)+4;
		cout << "your result is -- " << result << endl;
		break;
	default :
		cout << "incorrect number!!!";
		break;

	}


	return 0;
}