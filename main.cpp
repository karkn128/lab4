/*
 * main.cpp
 *
 *  Created on: Nov 27, 2013
 *      Author: karkn128
 */

#include <iostream>
#include <fstream>
#include <vector>
#include "Trimino.h"
using namespace std;


int main(){

	vector<Trimino> v;
	std::fstream file("trimino.txt", std::ios_base::in);

	int x, y, z;
	while(file >> x >> y >> z){
		v.push_back(Trimino(x, y, z));
	}
	v[1].print();
//	for(vector<Trimino>::iterator it = v.begin(); it != v.end(); it++){
//		it->print();
//	}



	return 0;

}




