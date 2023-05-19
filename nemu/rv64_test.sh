for f in ./rv64ui-p/*.bin
do
    basename=$(basename "${f%.bin}")
    make RISCV_TEST="$basename" run
done
