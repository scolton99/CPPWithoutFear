#include <windows.h>
#include <math.h>
#include <iostream>

using namespace std;

int WinMain(HINSTANCE hInst, HINSTANCE hPrevINST, LPSTR lpCmdLine, int nShowCmd){ 
	// TEMPO = 60
	double wn,hn,qn;
	wn = 2000;
	hn = 1000;
	qn = 500;
	cout << "Measure 1" << endl;
	Beep(1174.66,qn);
	Beep(1318.51,qn);
	Beep(1046.50,qn);
	Beep(880,hn);
	cout << "Measure 2" << endl;
	Beep(987.77,qn);
	Beep(783.99,qn);
	Beep(0,qn);
	cout << "Measure 3" << endl;
	Beep(583.77,qn);
	Beep(659.26,qn);
	Beep(523.25,qn);
	Beep(440,hn);
	cout << "Measure 4" << endl;
	Beep(493.99,qn);
	Beep(392,qn);
	Beep(0,qn);
	cout << "Measure 5" << endl;
	Beep(293.66,qn);
	Beep(329.63,qn);
	Beep(261.63,qn);
	Beep(220,hn);
	cout << "Measure 6" << endl;
	Beep(246.94,qn);
	Beep(220,qn);
	Beep(207.65,qn);
	cout << "Measure 7" << endl;
	Beep(196,hn);
	Beep(0,hn);
	cout << "Measure 8" << endl;
	Beep(783.99,qn);
	Beep(0,qn);
	Beep(293.66,qn);
	Beep(311.13,qn);
	cout << "Measure 9" << endl;
	Beep(329.63,qn);
	Beep(523.25,hn);
	Beep(329.63,qn);
	cout << "Measure 10"<< endl;
	Beep(523.25,hn);
	Beep(329.63,qn);
	Beep(523.25,qn + wn);
	cout << "Measure 11" << endl;
	cout << "Measure 12" << endl;
	Beep(0,qn);
	Beep(523.25,qn);
	Beep(587.33,qn);
	Beep(622.25,qn);
	cout << "Measure 13"<< endl;
	Beep(659.26,qn);
	Beep(523.25,qn);
	Beep(587.33,qn);
	Beep(659.26,hn);
	cout << "Measure 14" << endl;
	Beep(493.88,qn);
	Beep(587.33,hn);
	cout << "Measure 15" << endl;
	Beep(523.25,wn + hn);
	cout << "Measure 16" << endl;
	Beep(293.66,qn);
	Beep(311.13,qn);
	cout << "Measure 17" << endl;
	Beep(329.63,qn);
	Beep(523.25,hn);
	Beep(329.63,qn);
	cout << "Measure 18" << endl;
	Beep(523.25,hn);
	Beep(329.63,qn);
	cout << "Measure 19" << endl;
	Beep(523.25,wn + hn);
	cout << "Measure 20" << endl;
	Beep(440,qn);
	Beep(392,qn);
	cout << "Measure 21" << endl;
	Beep(369.99,qn);
	Beep(440,qn);
	Beep(523.25,qn);
	Beep(659.26,hn);
	cout << "Measure 22" << endl;
	Beep(587.33,qn);
	Beep(532.25,qn);
	Beep(440,qn);
	cout << "Measure 23" << endl;
	Beep(587.33,wn + qn);
	cout << "Measure 24" << endl;
	Beep(0,500);
	Beep(293.66,qn);
	Beep(311.13,qn);
	cout << "Measure 25" << endl;
	Beep(329.63,qn);
	Beep(523.25,hn);
	Beep(329.63,qn);
	cout << "Measure 26" << endl;
	Beep(523.25,hn);
	Beep(329.63,qn);
	cout << "Measure 27" << endl;
	Beep(523.25,wn + qn);
	cout << "Measure 28" << endl;
	Beep(0,qn);
	Beep(523.25,qn);
	Beep(587.33,qn);
	Beep(622.25,qn);
	cout << "Measure 29" << endl;
	Beep(659.26,qn);
	Beep(523.25,qn);
	Beep(587.33,qn);
	cout << "Measure 30" << endl;
	Beep(659.26,hn);
	Beep(493.88,qn);
	Beep(587.33,hn);
	cout << "Measure 31" << endl;
	Beep(523.25,wn + qn);
	cout << "Measure 32" << endl;
	Beep(0,qn);
	Beep(523.25,qn);
	Beep(587.33,qn);
	cout << "Measure 33" << endl;
	Beep(659.26,qn);
	Beep(523.25,qn);
	Beep(587.33,qn);
	Beep(659.26,hn);
	cout << "Measure 34" << endl;
	Beep(523.25,qn);
	Beep(587.33,qn);
	Beep(523.25,qn);
	cout << "Measure 35" << endl;
	Beep(659.26,qn);
	Beep(523.25,qn);
	Beep(587.33,qn);
	Beep(659.26,hn);
	cout << "Measure 36" << endl;
	Beep(523.25,qn);
	Beep(587.33,qn);
	Beep(523.25,qn);
	cout << "Measure 37" << endl;
	Beep(659.26,qn);
	Beep(523.25,qn);
	Beep(587.33,qn);
	Beep(659.26,hn);
	cout << "Measure 38" << endl;
	Beep(493.88,qn);
	Beep(587.33,hn);
	cout << "Measure 39" << endl;
	Beep(523.25,hn + qn);
	Beep(0,qn);
	cout << "Measure 40" << endl;
	Beep(1046.5,qn);
	Beep(0,qn + hn);
	return 0;
}
