#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
/*
Code for a random four-digit combination lock, made for the lockers at 
Lifetime Fitness, Target Center, by Jacob Meyer, 19 year old Aerospace
Engineering Junior, University of Minnesota, 11/3/2019
*/
int main(){
	srand(time(0));
	int C1 = (rand()%9)+ 1;
	int C2 = (rand()%9)+ 1;
	int C3 = (rand()%9)+ 1;
	int C4 = (rand()%9)+ 1;
	cout << C1 << C2 << C3 << C4 << endl;
	return 0;
}
