#!/bin/bash

cat ysyx_22041752_mycpu.vh ysyx_22041752.v ysyx_22041752_IFU.v ysyx_22041752_IDU.v ysyx_22041752_rf.v ysyx_22041752_EXU.v ysyx_22041752_alu.v ysyx_22041752_aser.v ysyx_22041752_mul.v ysyx_22041752_diver.v ysyx_22041752_csr.v ysyx_22041752_MEU.v ysyx_22041752_WBU.v ysyx_22041752_clint.v ysyx_22041752_axiarbiter.v > ~/ysyxSoC/ysyx/soc/ysyx_22041752.v

vim ~/ysyxSoC/ysyx/soc/ysyx_22041752.v -c 'g/`include "ysyx_22041752_mycpu.vh"/d' -c 'wq'

