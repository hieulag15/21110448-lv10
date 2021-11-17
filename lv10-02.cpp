#include<iostream>
void ConvertDecToHex(int n, char *des);
void ConvertDecToSec(int n, char *des);
void ConvertDecToBat(int n, char *des);
using namespace std;

int main(){
	int n;
	cin >> n;
	char *hex = new char[10];
	char *sec = new char[10];
	char *bat = new char[10];
	ConvertDecToHex(n, hex);
	cout << hex << endl;
	ConvertDecToSec(n, sec);
	cout << sec << endl;
	ConvertDecToBat(n, bat);
	cout << bat << endl;
	return 0;
}


void ConvertDecToHex(int n, char *des)
{
	int remember;
	int i 	= 0;
	while (n != 0)
	{
		remember = n % 16;
		n /= 16;
 
		switch (remember)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			des[i] = remember + '0';
			break;
		case 10:
			des[i] = 'A';
			break;
		case 11:
			des[i] = 'B';
			break;
		case 12:
			des[i] = 'C';
			break;
		case 13:
			des[i] = 'D';
			break;
		case 14:
			des[i] = 'E';
			break;
		case 15:
			des[i] = 'F';
			break;
		default:
			break;
		}
		i++;
	}
	des[i] = '\0';
	for (int count = 0; count < i/2; count++)
	{
		char temp 			    = des[count];
		des[count] 			    = des[i - count - 1];
		des[i - count - 1] 	    = temp;
	}
}

void ConvertDecToSec(int n, char *des){
	int remember;
	int i = 0;
	while (n != 0){
		remember = n % 2;
		n /= 2;
		switch (remember){
			case 0:
			case 1:
				des[i] = remember + '0';
				break;
		}
		i++;
	}
	des[i] = '\0';
	for (int count = 0; count < i/2; count++){
		char temp = des[count];
		des[count] = des[i - count - 1];
		des[i - count - 1] = temp;
	}
}

void ConvertDecToBat(int n, char *des){
	int remember;
	int i = 0;
	while (n != 0){
		remember = n % 8;
		n /= 8;
		switch (remember){
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				des[i] = remember + '0';
				break;
		}
		i++;
	}
	des[i] = '\0';
	for (int count = 0; count < i/2; count++){
		char temp = des[count];
		des[count] = des[i - count - 1];
		des[i - count - 1] = temp;
	}
}
