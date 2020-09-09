#2. Write a menu based script to perform following string operations
#a) To find length of a string
myvar="Rohan"
echo ${#myvar}  

#c) Copying string

#d) Concatenation of strings
str1="Hello,"
str2=" World"
str3="$str1$str2"
echo "$str3"

#e) Compare two strings
str1="Hello"
str2="World"
if [ "$str1" = "$str2" ];
then
	echo "equals"
else
	echo "not equals"
fi

#f) Reversing a string

