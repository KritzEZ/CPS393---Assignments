# CPS393 - Assignments
# Introduction to UNIX, C and C++
This repository contains 2 term assignments from the course.
Assignment 1 contains shell scripts.
Assignment 2 contains C code.
 # Assignment Instructions
<details>
<summary>
Assignment 1
</summary>
<br>
<pre>
CPS393 Assignment 1

You can view this file in a number of ways:
just look at this raw html (e.g, cat, more, vim, etc)
copy this file into your public_html and view it with a GUI browser (e.g., Firefox, IE)
use a text-based browser in a shell (e.g., lynx, sensible-browser, www-browser)
from a GUI desktop, use a GUI browser to view the file directly
Any changes/clarifications to this assignment will be given in file addendum.txt in directory /usr/courses/cps393/dwoit/assignment/assign1/

Part a:
Write a bash shell program named assign1a.sh that uses only environment variables, pipes and bash commands that exist on the CS moons. You may use bash commands we studied in class, such as clear, echo, grep, etc. You may also use other moon bash commands if necessary, such as: hostname, last, id, hostnamectl. Do NOT use temporary files (use pipes instead).
The environment variable $LOGNAME will be useful.

When I ran the program (I am user dwoit) in early August, on thebe, my program cleared the screen, and then produced the output below, (the part including, and between, the lines of dashes.)
Note that your program should output plain text, with NO color changes. The red color below is used only to identify those parts of your output that should NOT be hardcoded. Note that your program should also clear the screen before displaying its output.

-------------------------------------------------------------------------------
This machine is thebe.
7 users have logged into thebe since Thu Aug 1; they are:
aabhari,amirul,dwoit,iwoungan,mes,neshel,s4ghaffa.
Thebe is at IP Address 141.117.57.46 and is running Operating System Ubuntu 16.04.6 LTS.
You are dwoit, and you have logged in 2 times since Thu Aug 1.
-------------------------------------------------------------------------------

IMPORTANT:
Your program must use only variables, pipes, and bash shell commands.
Your program must not use non-bash-command code, such as C, Python, Java, etc.

NON-HARDCODED PARTS:
Several items must be detected by your program, and NOT hardcoded. As noted above, these are shown above in red, but your program should NOT colorize output:
All occurrences of the machine name (thebe, Thebe).
The number of users. i.e., the "7" above should vary according to when assign1a.sh is run.
The date. This must be the date /var/log/wtmp begins (this date is given in the final line printed by the "last" command).
The list of users who have logged in since that date (as printed by the "last" command).
The IP address
The Operating System
The login name of the user running assign1a.sh (dwoit when professor ran hers, but NOT HARDCODED). Your program must detect the name of the user. Thus, if dmason ran dwoit's assign1a.sh, the program would print "You are dmason, ...", even though assign1a.sh is dwoit's program, is in dwoit's filespace, and is owned by dwoit.
The number of times that user has logged in since the start date (this is the number of lines for that user in last's output.) Note that "user" is the user running the program, not necessarily the program's owner.
The parts of the output above shown in red font should NOT be hardcoded. The parts of the output above shown in normal (non-red) font should be hardcoded. For example, these strings MUST be hardcoded:
"-------------------------------------------------------------------------------"
"This machine is "
" users have logged into "
"since" 
"; they are:"
etc.


Part b:
Write a shell program named assign1b.sh that uses a find command to display the following:
files in the filesystem in and under directory /usr/courses/cps393/dwoit/courseNotes/
whose name ends in .h but whose name does NOT contain the lower-case letter t
and who are in group cps393
and have been accessed less than 75 days ago

Your program should display the files using ls -dils format. This is a format similar to that of ls -l. You can search for the string ls -dils format in the find man page to discover an appropriate option to use in your find command.
Your program should redirect stdout, so that any messages to stdout are not displayed.
Your program should use just a single find command to accomplish its task; do not use pipes, other linux commands, such as ls, etc.
When dwoit ran assign1b.sh on thebe on August 20, it produced the output below.
However, your output may differ because of your environment.

  6696735      4 -rw-r--r--   1 dwoit    cps393         98 Feb 28  2014 /usr/courses/cps393/dwoit/courseNotes/Programs/c/c1/myfuncs.h
  4691378      0 -rw-r--r--   1 dwoit    cps393         29 Aug 20 11:37 /usr/courses/cps393/dwoit/courseNotes/Programs/c/c1/f.h
  9742091      4 -rw-------   1 dwoit    cps393        841 Mar 27  2014 /usr/courses/cps393/dwoit/courseNotes/Programs/c/c3/kennelClub/KClub.h
  2846471      4 -rw-r--r--   1 dwoit    cps393        154 Aug 20 11:37 /usr/courses/cps393/dwoit/courseNotes/Programs/c/c4/add.h
  2846482      4 -rw-r--r--   1 dwoit    cps393        106 Aug 20 11:37 /usr/courses/cps393/dwoit/courseNotes/Programs/c/c4/hideADT/complex.h

CHEATING
There are hundreds of ways to code these shell programs. If your code is too similar to another student's code, you will both receive zero and be reported for cheating.

SUBMIT
Submit your two programs using the cps393 submit program.
To Submit: submit-cps393dwoit filename
To Check what you've submitted: check-submit-cps393dwoit
To Check your Marks: use D2L

If the submit programs are not in your path, you can use their absolute path name, as in:
/usr/courses/bin/x86_64/submit-cps393dwoit filename
</pre>
</details>
