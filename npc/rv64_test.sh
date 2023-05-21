for f in ./rv64uim-p/rv64um-p-mulhu.bin
do
    make sim OPTIONS="-b -d $NEMU_HOME/build/riscv64-nemu-interpreter-so" IMG_BIN="$f" 
done
