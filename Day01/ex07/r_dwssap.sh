export FT_LINE1=3
export FT_LINE2=8

cat /etc/psswd | \
	grep -v '\#' |\
	sed '1!n;d'| \
	cut -d':' -f |\
	rev |\
	sort -r |\
	awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' |\
	paste -s -d"," - |\
	sed 's/,/, /g' |\
	sed 's/$/./' |\
	tr -d '\n'
