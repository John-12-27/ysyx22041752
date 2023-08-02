echo $NEMU_HOME
if [[ $NEMU_HOME -ef ~/ysyx-workbench/nemu ]]
then
    echo "Don't need to copy tools"
else
    cp -rf ~/ysyx-workbench/nemu/tools .  # diff tools sync 
    echo "copied tools !!!"
fi

RESULT=.result
touch $RESULT
for f in ./rv64uim-p/*.bin
do
    basename=$(basename "${f%.bin}")
    echo -e -n "[\033[1;32m$basename\033[0m]" >> $RESULT
    if make ARGS=-b RISCV_TEST="$basename" run
    then
        echo -e "\033[1;32m  PASS!\033[0m" >> $RESULT
    else
        echo -e "\033[1;31m  FAIL!\033[0m" >> $RESULT
    fi
done
cat $RESULT
rm -rf $RESULT
