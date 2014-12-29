#include <sqlite3.h>
#include <string>
#include "db.h"

bool DataManager::databaseExists()
{
	
}

int DataManager::validateDB()
{
	if (DataManager::databaseExists())
	{
		sqlite3 *db;
		sqlite3_open("data.db", &db);
	}
}