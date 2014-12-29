#include <sqlite3.h>
#include <string>
#include "db.h"

bool DataManager::databaseExists()
{
	sqlite3 *db;
    return (sqlite3_open("data.db", &db) == SQLITE_OK);
}

int DataManager::validateDB()
{
	if (DataManager::databaseExists()) return 0;
}