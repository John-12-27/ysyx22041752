// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/john/ysyx-workbench/npc/vsrc/dpi_c.v:71:38
    extern void halt(const svOpenArrayHandle s);
    // DPI import at /home/john/ysyx-workbench/npc/vsrc/dpi_c.v:75:38
    extern void set_dnpc_ptr(const svOpenArrayHandle a);
    // DPI import at /home/john/ysyx-workbench/npc/vsrc/dpi_c.v:73:38
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/john/ysyx-workbench/npc/vsrc/dpi_c.v:76:38
    extern void set_inst_ptr(const svOpenArrayHandle a);
    // DPI import at /home/john/ysyx-workbench/npc/vsrc/dpi_c.v:74:38
    extern void set_pc_ptr(const svOpenArrayHandle a);
    // DPI import at /home/john/ysyx-workbench/npc/vsrc/dpi_c.v:72:38
    extern void valid(const svOpenArrayHandle s);

#ifdef __cplusplus
}
#endif
