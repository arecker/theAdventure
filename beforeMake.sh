#!/bin/bash

if [ -e "data.db" ]
then
    rm data.db
    sqlite3 data.db < everything.sql
fi
