echo "Enter two numbers :"
read a
read b
if [ $a -lt $b ]
then
  echo "$a is smaller."
else
  echo "$b is smaller."
fi
