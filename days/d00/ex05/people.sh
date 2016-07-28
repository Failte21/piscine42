ldapsearch -Q "uid=z*" | grep "cn: " | cut -d ' ' -f 2-3 | sort -r
