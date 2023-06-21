for f in ./rv64uim-p/rv64ui-p-jalr.bin
do
    make sim OPTIONS="-b -i ./npc-itrace.txt -m ./npc-mtrace.txt -d $NEMU_HOME/build/riscv64-nemu-interpreter-so" IMG_BIN="$f" 
done
