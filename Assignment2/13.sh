read -p "Enter two number" a b
echo "$a+$b" | bc
echo $( expr $a + $b )

x=`echo "$a * $b" | bc`
echo $x
