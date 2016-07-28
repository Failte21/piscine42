ldapsearch -Q | grep "cn: " | cut -d ' ' -f 3 | grep -i "bon" | wc -l | sed "s/ //g"
