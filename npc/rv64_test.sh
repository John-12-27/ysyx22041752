for f in ./rv64uim-p/*.bin
do
    make sim OPTIONS="-b -d $NEMU_HOME/build/riscv64-nemu-interpreter-so" IMG_BIN="$f" 
done
