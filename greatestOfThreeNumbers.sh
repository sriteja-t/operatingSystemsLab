read -p "Enter the first number a  :  " a
read -p "Enter the second number b : " b
read -p "Enter the third number c  :  " c
if [ $a -gt $b ] && [ $a -gt $c ]
then 
echo "a is the greatest number"
else if [ $b -gt $c ]
then
    	echo "b is the greatest number"
else
	echo "c is the greatest number"
fi
fi
