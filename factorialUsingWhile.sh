read -p "Enter the number to find Factorial: " n
f=1
while [ $n -gt 1 ]
do
  f=$(( f * n ))
  n=$(( n - 1 ))
done
echo $f
