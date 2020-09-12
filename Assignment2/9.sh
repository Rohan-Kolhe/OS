read -p "Enter day of week:" day
if [ $day -eq 1 ]
	then
	echo "Monday"
	elif [ $day -eq 2 ]
	then
	echo "Tuesday"
	elif [ $day -eq 3 ]
	then
	echo "Wednesday"
	elif [ $day -eq 4 ]
	then
	echo "Thursday"
	elif [ $day -eq 5 ]
	then
	echo "Friday"
	elif [ $day -eq 6 ]
	then
	echo "Satuarday"
	elif [ $day -eq 7 ]
	then
	echo "Sunday"
	else
	echo "Invalid input"
fi

read -p "Enter day of week:" day
case $day in
"1")
	echo "Monday" ;;
"2")
	echo "Tuesday" ;;
"3")
	echo "Wednesday" ;;
*)
	echo "Invalid" ;;
esac
	
