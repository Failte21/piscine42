cat /etc/passwd | grep -v "\#" | sed "1d" | awk '{if(NR%2)print $0}' | cut -d : -f 1 | rev | sort -r | head -$FT_LINE2 | tail -`echo $(($FT_LINE2-$FT_LINE1+1))` | tr "\n" "," |  sed "s/\,\$/./" | sed "s/\,/\, /g" | tr -d "\n" 