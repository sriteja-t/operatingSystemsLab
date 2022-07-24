echo "Menu based Calculator"
echo "Enter Numbers:"
read a
read b
echo -n "Enter operation: "
read c
case $c in
"+") echo "$a + $b = " `expr $a + $b`;;
"-") echo "$a - $b = " `expr $a - $b`;;
"*") echo "$a * $b = " `expr $a * $b`;;
"/") echo "$a / $b = " `expr $a / $b`;;
esac
