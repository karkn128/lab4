/*
 * Trimino.h
 *
 *  Created on: Nov 27, 2013
 *      Author: karkn128
 */

#ifndef TRIMINO_H_
#define TRIMINO_H_

class Trimino {
public:
	Trimino(int x, int y, int z);
	virtual ~Trimino();
	void print();
	void spin();
	bool valid();

private:
	int left;
	int right;
	int bottom;
};

#endif /* TRIMINO_H_ */
