/* ======================================================================== *\
!
 !   Author(s): Tarek Hassan     12/2013 <mailto:thassan@ifae.es>
 !
 !   Copyright: CTA Software Development, 2013
 !
 \* ======================================================================== */
//////////////////////////////////////////////////////////////////////////////
//
// GMetaData
//
// Class to store all keywords within metadata
//
//////////////////////////////////////////////////////////////////////////////


#include "GMetaData.h"

#include <iostream>
#include <string.h>

using namespace std;

////////////////////////////////////////////////////////////////
// 
// Construct pdf table with type
//
flexIRF::GMetaData::GMetaData() {

}


void flexIRF::GMetaData::AddMetaKeyword(string keyword, string value, string comment){

	if (keyword.length() > 8){
		cout << "ERROR: Keyword too long (max length = 8)" << endl;
		return;
	}
	if (value.length() > 71){
		cout << "ERROR: Value too long (max length = 71)" << endl;
		return;
	}
	if (comment.length() > 73){
		cout << "ERROR: Comment too long (max length = 73)" << endl;
		return;
	}
	fStKeywords.push_back(keyword);
	fStValues.push_back(value);
	fStComments.push_back(comment);

}

void flexIRF::GMetaData::AddMetaKeyword(string keyword, float value, string comment){

	if (keyword.length() > 8){
		cout << "ERROR: Keyword too long (max length = 8)" << endl;
		return;
	}

	if (comment.length() > 73){
		cout << "ERROR: Comment too long (max length = 73)" << endl;
		return;
	}
	fFlKeywords.push_back(keyword);
	fFlValues.push_back(value);
	fFlComments.push_back(comment);

}








