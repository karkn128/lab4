/*
 * Trimino.cpp
 *
 *  Created on: Nov 27, 2013
 *      Author: karkn128
 */

#include "Trimino.h"
#include <iostream>

Trimino::Trimino(int x, int y, int z)
{
	bottom = x;
	left = y;
	right = z;

}

void Trimino::print(){
	std::cout << bottom << left << right << std::endl;
}

void Trimino::spin(){
	int temp = left;
	left = right;
	right = bottom;
	bottom = temp;

}

bool Trimino::valid(){
	//Maximum value 5
	if(bottom > 5 || right > 5 || left > 5)
		return false;

	bool valid;
	for(int i = 0; i != 3; ++i){
		valid = true;
		if((bottom > right) || (bottom > left))
			valid = false;
		else if(right < bottom || right < left)
			valid = false;
		else if(left < bottom || left > right)
			valid = false;
		if(valid)
			return true;
		spin();
	}
	return valid;
}

Trimino::~Trimino() {
}

