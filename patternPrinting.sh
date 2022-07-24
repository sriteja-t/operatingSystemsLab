echo -n "Enter size of pattern to be printed: "
read s
i=1
while [ $i -le $s ]
do
  j=1
  while [ $j -le $i ]
  do
    echo -n "*"
    j=$((j+1))
  done
  echo ""
  i=$((i+1))
done

# $ chmod +x pattern.sh
# $ ./pattern.sh
# Enter size of pattern to be printed: 5
# *
# **
# ***
# ****
# *****
