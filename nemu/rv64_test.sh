for f in ./rv64uim-p/*.bin
do
    basename=$(basename "${f%.bin}")
    make ARGS=-b RISCV_TEST="$basename" run
done
