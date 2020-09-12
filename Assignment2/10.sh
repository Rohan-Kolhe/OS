#a) Write a script to find biggest of three no.s
read -p "Enter three numbers:" a b c
if [ $a -gt $b -a $a -gt $c ]
then 
	echo "$a is greater"
elif [ $b -gt $a -a $b -gt $c ]
then
	echo "$b is greater"
else
	echo "$c is greater"
fi


#b) To find avg of 3 no.s, read no.s from keyboard
read -p "Enter three numbers:" a  b c
total=$(($a+$b+$c))
avg=$(($total/3))
echo "Avg is $avg"
