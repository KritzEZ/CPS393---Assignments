#!/bin/bash
clear
echo "-----------------------------------------------------"
echo "This machine is" `hostname`"."
echo `last | cut -c1-8 | sort | uniq | sed '/wtmp beg/d' | wc -l` "users have logged into "`hostname`" since "`last | grep "wtmp begins" | cut -d" " -f3-6`"; they are:"
echo `last | cut -c1-8 | sort | uniq | sed '/wtmp beg/d' | sed 's/ //g' | tr '\n' ',' | head -c -1 | sed 's/,//'`"."
WORD=`hostname`
echo ${WORD^} "is at IP Address "`hostname -I | cut -b 12-` "and is running"`hostnamectl | grep "Operating System" | tr --delete :`"."
echo "You are $LOGNAME, and you have logged in "`last | grep "k38shah" | wc -l` "times since "`last | grep "wtmp begins" | cut -d" " -f3-6`"."
echo "-----------------------------------------------------"
