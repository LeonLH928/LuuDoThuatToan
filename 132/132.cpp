#include <iostream>
using namespace std;

int main()
{
	int xA, yA, xB, yB, xC, yC, xM, yM;
	cin >> xA >> yA >> xB >> yB >> xC >> yC >> xM >> yM;
	double SABC, SMAB, SMBC, SMAC;
	SABC = abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC) / 2;
	SMAB = abs(xA * yB + xB * yM + xM * yA - xB * yA - xM * yB - xA * yM) / 2;
	SMBC = abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC) / 2;
	SMAC = abs(xA * yM + xM * yC + xC * yA - xM * yA - xC * yM - xA * yC) / 2;
	double S = SMAB + SMBC + SMAC;
	if (S == SABC)
		cout << "M trong";
	else cout << "M ngoai";
	return 0;
}