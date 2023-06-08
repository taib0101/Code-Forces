#In the name of Allah , the entirely Merciful,the specially Nerciful
read t
it=1
while [ $it -le $t ]
do
  read n
  read -a arr
  cnt=0
  i=0
  while [ $i -lt $(($n-1)) ]
  do
    aa=$i
    if [ ${arr[$i]} -le ${arr[$(($i+1))]} ]
    then
        while [ $(($i+1)) -lt $n ] 
        do
          if [ ${arr[$i]} -gt ${arr[$(($i+1))]} ]
          then
              break
          fi
          bb=$(($i+1))
          i=$(($i+1))
        done
        if [ ${arr[$aa]} -ne ${arr[$bb]} ]
	then
            cnt=$(($cnt + 1))
        fi
    elif [ ${arr[$i]} -ge ${arr[$(($i+1))]} ]
    then
	while [ $(($i+1)) -lt $n ] 
        do
          if [ ${arr[$i]} -lt ${arr[$(($i+1))]} ]
          then
              break
          fi
          bb=$(($i+1))
          i=$(($i+1))
        done
        if [ ${arr[$aa]} -ne ${arr[$bb]} ]
        then
            cnt=$(($cnt + 1)) 
        fi
    fi 
  done
  echo "$(($cnt+1))"
  it=$(($it + 1))
done
