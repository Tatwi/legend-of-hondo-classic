/*
Copyright (C) 2007 <SWGEmu>
 
This File is part of Core3.
 
This program is free software; you can redistribute 
it and/or modify it under the terms of the GNU Lesser 
General Public License as published by the Free Software
Foundation; either version 2 of the License, 
or (at your option) any later version.
 
This program is distributed in the hope that it will be useful, 
but WITHOUT ANY WARRANTY; without even the implied warranty of 
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
See the GNU Lesser General Public License for
more details.
 
You should have received a copy of the GNU Lesser General 
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 
Linking Engine3 statically or dynamically with other modules 
is making a combined work based on Engine3. 
Thus, the terms and conditions of the GNU Lesser General Public License 
cover the whole combination.
 
In addition, as a special exception, the copyright holders of Engine3 
give you permission to combine Engine3 program with free software 
programs or libraries that are released under the GNU LGPL and with 
code included in the standard release of Core3 under the GNU LGPL 
license (or modified versions of such code, with unchanged license). 
You may copy and distribute such a system following the terms of the 
GNU LGPL for Engine3 and the licenses of the other code concerned, 
provided that you include the source code of that other code when 
and as the GNU LGPL requires distribution of source code.
 
Note that people who make modified versions of Engine3 are not obligated 
to grant this special exception for their modified versions; 
it is their choice whether to do so. The GNU Lesser General Public License 
gives permission to release a modified version without this exception; 
this exception also makes it possible to release a modified version 
which carries forward this exception.
*/

#ifndef STRINGLIST_H_
#define STRINGLIST_H_

#include "ObjectControllerMessage.h"

class StringList : public ObjectControllerMessage {
	uint8 optionCount;
	
public:
	
	StringList(CreatureObject* creo) : ObjectControllerMessage(creo->getObjectID(), 0x0B, 0xE0) {
		optionCount = 0;
		insertByte(0);
	}
	
	void insertOption(const string& file, const string& str) {
		
		int size = 0x56 + file.size() + str.size();
		bool odd = (size & 1);
		
		if (odd)
			insertInt((size + 1) / 2);
		else 
			insertInt(size / 2);

		insertShort(0);
		insertShort(0);
		insertByte(1);
		insertInt(0xFFFFFFFF);
		
		insertAscii(file.c_str());
		insertInt(0);
		insertAscii(str.c_str());
		
		insertLong(0);
		insertAscii("");
		insertInt(0);
		insertAscii("");
		insertInt(0);
		
		insertLong(0);
		insertAscii("");
		insertInt(0);
		insertAscii("");
		insertInt(0);
		
		insertLong(0);
		insertAscii("");
		insertInt(0);
		insertAscii("");
		insertInt(0);
		
		insertInt(0);
		insertInt(0);
		insertByte(0);

		if (odd)
			insertByte(0);

		updateOptionCount();
	}
	
	void insertOption(string& option) {
		insertUnicode(unicode(option));
		updateOptionCount();
	}
		
	void insertOption(unicode& option) {
		insertUnicode(option);
		updateOptionCount();		
	}
	
	void updateOptionCount() {
		insertByte(30, ++optionCount);
	}
	
};

#endif
