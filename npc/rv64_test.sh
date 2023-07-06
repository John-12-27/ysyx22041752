for f in ./rv64uim-p/rv64ui-p-add.bin
do
    make sim OPTIONS="-b -d $NEMU_HOME/build/riscv64-nemu-interpreter-so" IMG_BIN="$f" 
done
