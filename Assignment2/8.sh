#1. Write a script To check given year is leap or not.
read year
if [ $((year%4)) -eq 0 ]; 
then
if [ $((year%100)) -eq 0 ];
then
if [ $((year%400)) -eq 0 ];
then
echo "Leap year"
else
echo "Ordinary year"
fi
else
echo "Ordinary year"
fi
else
echo "Ordinary year"
fi
