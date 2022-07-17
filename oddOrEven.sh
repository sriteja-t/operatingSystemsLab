read -p "Enter the number: " a 
if [ $(($a%2)) -eq 0 ]
then 
	echo "The given number is even number"
else
	echo "The given number is odd number"
fi

