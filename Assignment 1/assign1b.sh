#!/bin/bash
clear
find /usr/courses/cps393/dwoit/courseNotes/  -name '*.h' ! -name '*t*' -group 'cps393' -atime -75 -ls 2>/dev/null
