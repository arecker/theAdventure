#include <string>
#include <iostream>
#include <cstring>
#include <sqlite3.h>
#include <stdlib.h>
#include "screen.h"
#include "iterator.h"

ScreenIterator::ScreenIterator()
{
	CurrentScreen = ScreenIterator::getScreenByID(1);
	HasNext = true;
}

static int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
	int i;
	std::cout << "Number of args= " << argc << std::endl;

	for(i=0; i<argc; i++)
	{
		std::cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << std::endl;
	}
	std::cout << std::endl;
	return 0;
}

Screen ScreenIterator::getScreenByID(int id)
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc = sqlite3_open("data.db", &db);
	if( rc )
	{
		std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
		sqlite3_close(db);
		exit(1);
	}

	rc = sqlite3_exec(db,"select * from screen where id=" + id + ';', callback, 0, &zErrMsg);
	if( rc!=SQLITE_OK )
	{
	 	std::cerr << "SQL error: " << zErrMsg << std::endl;
	 	sqlite3_free(zErrMsg);
	}
	
	// Return new screen
	return Screen ("Hello.");
}

void ScreenIterator::getNext()
{
	HasNext = false;
}