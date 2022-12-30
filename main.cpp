#include <iostream>
using namespace std;
#include <string>

int functionleg(string letter, int max) {
	int number = 0;
	int n = 0;
	for (int i = 0; i < max; i++) {
		char le = letter[i];
		switch (le) {
		case 'J':
		case 'j':
		case 'S':
		case 's':
			number = 1;
			break;
		case 'B':
		case 'b':
		case 'K':
		case 'k':
		case 'T':
		case 't':
			number = 2;
			break;
		case 'C':
		case 'c':
		case 'L':
		case 'l':
			number = 3;
			break;
		case 'D':
		case 'd':
		case 'M':
		case 'm':
		case 'V':
		case 'v':
			number = 4;
			break;
		case 'N':
		case 'n':
		case 'W':
		case 'w':
			number = 5;
			break;
		case 'F':
		case 'f':
		case 'X':
		case 'x':
			number = 6;
			break;
		case 'G':
		case 'g':
		case 'P':
		case 'p':
		case 'Y':
		case 'y':
			number = 7;
			break;
		case 'H':
		case 'h':
		case 'Q':
		case 'q':
		case 'Z':
		case 'z':
			number = 8;
			break;
		case 'R':
		case 'r':
			number = 9;
			break;
		default:
			number = 0;
		}

		n = n + number;
	}

	return n;
}

int functionvog(string letter, int max) {
	int number = 0;
	int n = 0;
	for (int i = 0; i < max; i++) {
		char le = letter[i];
		switch (le) {
		case 'A':
		case 'a':
			number = 1;
			break;
		case 'U':
		case 'u':
			number = 3;
			break;
		case 'E':
		case 'e':
			number = 5;
			break;
		case 'O':
		case 'o':
			number = 6;
			break;
		case 'I':
		case 'i':
			number = 9;
			break;
		default:
			number = 0;
		}

		n = n + number;
	}

	return n;
}

int main() {
	string a;
	cout << "Ponga una palabra" << endl;
	cin >> a;

	cout << "Las letras: ";

	cout << functionleg(a, a.length());

	cout << endl;
	cout << "Las Vocales: ";

	cout << functionvog(a, a.length());

	cout << endl;
	cout << endl;

	float graph = functionleg(a, a.length()) + functionvog(a, a.length());

	cout << endl;

	float grapha = functionvog(a, a.length()) / graph * 100;
	float graphp = functionleg(a, a.length()) / graph * 100;
	cout << "Porcentaje de alma: " << grapha;
	cout << endl;
	cout << "Porcentaje de personalide: " << graphp;
	cout << endl;
	cout << endl;
	int num = functionvog(a, a.length()) + 100;

	int digitvog[2];
	for (int i = 1; i >= 0; i--) {
		digitvog[i] = num % 10;
		num /= 10;
	}

	int num2 = functionleg(a, a.length()) + 100;
	int digitleg[3];
	for (int i = 1; i >= 0; i--) {
		digitleg[i] = num2 % 10;
		num2 /= 10;
	}

	int tol = digitvog[0] + digitvog[1] + digitleg[0] + digitleg[1];

	cout << "Personalidad: " << digitleg[0] + digitleg[1] << endl;

	cout << "Alma: " << digitvog[0] + digitvog[1] << endl;

	cout << endl;

	cout << endl;
	cout << endl;

	cout << "Calculo del Destino: " << tol << endl;

	int digit2[2];
	tol += 100;
	for (int i = 1; i >= 0; i--) {
		digit2[i] = tol % 10;
		tol /= 10;
	}

	cout << "Destino: " << digit2[0] + digit2[1] << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// Personalidad

	int num3 = functionvog(a, a.length()) + functionleg(a, a.length()) + 100;
	cout << "Numero Maestro: " << num3 - 100 << endl;
	int digit[2];
	for (int i = 1; i >= 0; i--) {
		digit[i] = num3 % 10;
		num3 /= 10;
	}
	cout << "Resultado: " << digit[0] + digit[1] << endl;

	// int num4 = digit[0]+digit[1];
	// int digit3[2];
	//     for (int i = 1; i >= 0; i--)
	// {
	//     digit3[i] = num4%10;
	//     num4 /= 10;
	// }

	// cout << "Personalide: " << digit3[0] +digit3[1]<<endl;

	return 0;
}