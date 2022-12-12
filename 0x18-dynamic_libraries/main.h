#!/bin/bash
gcc -fpic -c ./*.c
gcc -shared -o "name_of_dynamic_lib" ./*.o













