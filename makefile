SRC_FILES_V = src/netcat.v
SRC_FILES_C = src/netcat.c
OUT_NAME = ./bin/nc

CC1 = v
CC2 = gcc

exploit: _compile_static
run: _run_outfile
clean: _clean_outfile
c: _make_v_to_c

_make_v_to_c:
	@echo "[*] Try make $(SRC_FILES_V) to $(SRC_FILES_C)."
	@$(CC1) $(SRC_FILES_V) -shared -cc $(CC2) -o $(SRC_FILES_C) || echo -e "\033[33m[warn] \033[0mUnable to make to $(SRC_FILES_C)"


_compile_static:
	@echo "[*] compile to: $(OUT_NAME)."
	@$(CC1) $(SRC_FILES_V) -o $(OUT_NAME) || $(CC2) $(SRC_FILES_C) -o $(OUT_NAME) -lgc

_run_outfile:
	@$(OUT_NAME)

_clean_outfile:
	@rm $(OUT_NAME)
	@echo "[*] clean now."


