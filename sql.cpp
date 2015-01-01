#include <iostream>
#include <cstring>
#include <sqlite3.h>
#include <stdlib.h>

// g++ AccessTableEmployee.cpp -lsqlite3

using namespace std;

static int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
  int i;
  cout << "Number of args= " << argc << endl;

  for(i=0; i<argc; i++)
  {
     cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << endl;
  }
  cout << endl;
  return 0;
}

int main(int argc, char **argv)
{
  sqlite3 *db;       // Declare pointer to sqlite database structure
  char *zErrMsg = 0;

  // Open Database 

  int rc = sqlite3_open("data.db", &db);
  if( rc )
  {
    cerr << "Can't open database: " << sqlite3_errmsg(db) << endl;
    sqlite3_close(db);
    exit(1);
  }

  /*// Insert data into database

  const char *zSql = "SELECT * FROM screen;";

  sqlite3_stmt *ppStmt;
  const char **pzTail;

  if( sqlite3_prepare_v2(db, zSql, strlen(zSql)+1, &ppStmt, pzTail) != SQLITE_OK )
  {
      cerr << "db error: " << sqlite3_errmsg(db) << endl;
  }

  if(ppStmt)
  {
      sqlite3_step(ppStmt);
      sqlite3_finalize(ppStmt);
      sqlite3_exec(db, "COMMIT", NULL, NULL, NULL);
  }
  else
  {
      cerr << "Error: ppStmt is NULL" << endl;
  }*/

  // Select from database 

  rc = sqlite3_exec(db,"select * from screen", callback, 0, &zErrMsg);
  if( rc!=SQLITE_OK )
  {
      cerr << "SQL error: " << zErrMsg << endl;
      sqlite3_free(zErrMsg);
  }

  // Close

  sqlite3_close(db);
  return 0;
}
          