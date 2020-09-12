read -p "Enter the number" num
if [ $(($num%2)) -eq 0 ]
then
	echo "Nuber is even"
else
	echo "Nuber is odd"
fi
