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

# $ sh menuBasedCalculator.sh
# Menu based Calculator
# Enter Numbers:
# 5
# 5
# Enter operation: +
# 5 + 5 = 10
