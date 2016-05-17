/*
 * FileGenerator.h
 *
 *  Created on: May 1, 2016
 *      Author: Bao Pham
 */

#ifndef FILEGENERATOR_H_
#define FILEGENERATOR_H_

class FileGenerator {
public:
	FileGenerator();
	void generate(int processes);
	virtual ~FileGenerator();
};

#endif /* FILEGENERATOR_H_ */
