echo $(( $(echo "$FT_NBR1" | tr "'\"?!" "0123" | fold -w1 | paste -sd0) + $(echo "$FT_NBR2" | tr "mrdoc" "01234" | fold -w1 | paste -sd0) )) | awk '{
    digits="gtaiolunemf ";
    n=$1;
    res="";
    while(n>0){
        res=substr(digits,(n%13)+1,1)res;
        n=int(n/13);
    }
    if(res=="") res="Salut";
    print res;
}'
