for f in *.elf; 
do 
    basename=$(basename "${f%.elf}")
    riscv64-linux-gnu-objcopy -O binary "$f" "$basename.bin"; 
done
