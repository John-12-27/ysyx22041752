RESULT=.result
touch $RESULT
for f in ./rv64uim-p/csr-riscv64-npc.bin
do
    basename=$(basename "${f%.bin}")
    echo -e -n "[\033[1;32m$basename\033[0m]" >> $RESULT
    if make sim IMG_BIN="$f" 
    then
        echo -e "\033[1;32m  PASS!\033[0m" >> $RESULT
    else
        echo -e "\033[1;31m  FAIL!\033[0m" >> $RESULT
    fi
done
cat $RESULT
rm -rf $RESULT
