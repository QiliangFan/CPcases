SHELL=/bin/zsh

all: array1D pointer1D

run_array: array1D
	./array1D

run_pointer: pointer1D
	./pointer1D

array1D: array1D.o
	$(CC) $(CFLAGS) $? -o $@

pointer1D: pointer1D.o
	$(CC) $(CFLAGS) $? -o $@

%.o: %.c
	$(CC) -c $(CFLAGS) $^ -o $@

.PHONY: clean

clean:
	@ls *.o | xargs -n 1 -I {} rm {}
	@ls -lh | grep "^-rwx" | awk '{print $$9}' |xargs -I {} bash -c "echo {}; rm {}" || true