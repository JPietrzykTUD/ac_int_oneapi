ALL_CXXFLAGS=-Wall -std=c++20 $(CXXFLAGS)

BOARD= #SET_ME

# Directories
INC_DIRS := ../common/inc
LIB_DIRS :=

# Files
INCS := $(wildcard )
LIBS := pthread

emu: 
	icpx -qactypes -fsycl $(ALL_CXXFLAGS) -Iinclude -Itvl/include -fintelfpga -DFPGA_EMULATOR src/clz_test.cpp -fsycl-device-code-split=off -o build/clz_test.fpga_emu $(foreach D,$(LIB_DIRS),-L$D) $(foreach L,$(LIBS),-l$L)
	icpx -qactypes -fsycl $(ALL_CXXFLAGS) -Iinclude -Itvl/include -fintelfpga -DFPGA_EMULATOR src/clz_bench.cpp -fsycl-device-code-split=off -o build/clz_bench.fpga_emu $(foreach D,$(LIB_DIRS),-L$D) $(foreach L,$(LIBS),-l$L)

clz_test:
	icpx -qactypes -fsycl $(ALL_CXXFLAGS) -v -Iinclude -Itvl/include -fintelfpga -Xshardware -fsycl-device-code-split=off -Xsprofile -Xssave-temps -reuse-exe=build/clz_test.fpga -Xsoutput-report-folder=clz_test.prj -Xsboard=$(BOARD) -o build/clz_test.fpga src/clz_test.cpp $(foreach D,$(LIB_DIRS),-L$D) $(foreach L,$(LIBS),-l$L)

clz_bench:
	icpx -qactypes -fsycl $(ALL_CXXFLAGS) -v -Iinclude -Itvl/include -fintelfpga -Xshardware -fsycl-device-code-split=off -Xsprofile -Xssave-temps -reuse-exe=build/clz_bench.fpga -Xsoutput-report-folder=clz_bench.prj -Xsboard=$(BOARD) -o build/clz_bench.fpga src/clz_bench.cpp $(foreach D,$(LIB_DIRS),-L$D) $(foreach L,$(LIBS),-l$L)

.PHONY: emu report clz_test clz_bench hw_non clean clean_hw
