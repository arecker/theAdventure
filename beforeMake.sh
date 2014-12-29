#!/bin/bash

if [ -e "data.db" ]
then
    rm data.db
fi

sqlite3 data.db < everything.sql
