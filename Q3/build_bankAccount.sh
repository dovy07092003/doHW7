#!/bin/bash
echo Building file for bankAccount.cpp and bankApp.cpp
g++ -Wall bankAccount.cpp bankApp.cpp -o bankAppcpp
echo " Done. The execute file's name is bankAppcpp"
