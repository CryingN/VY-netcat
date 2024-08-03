SRC_FILES = src/netcat.v
OUT_NAME = ./bin/nc

CC = v


exploit: _compile_static
run: _run_outfile
clean: _clean_outfile


_compile_static:
	@echo "[*] make to: $(SRC_FILES)."
	@$(CC) $(SRC_FILES) -o $(OUT_NAME)

_run_outfile:
	@$(OUT_NAME)

_clean_outfile:
	@rm $(OUT_NAME)
	@echo "[*] clean now."


