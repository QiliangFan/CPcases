SHELL=/bin/zsh

all: struct

run_array: struct
	./struct

run: struct
	./struct

struct: struct.o
	$(CC) $(CFLAGS) $? -o $@

struct: struct.o
	$(CC) $(CFLAGS) $? -o $@

%.o: %.c
	$(CC) -c $(CFLAGS) $^ -o $@

.PHONY: clean

clean:
	@ls *.o | xargs -n 1 -I {} rm {}
	@ls -lh | grep "^-rwx" | awk '{print $$9}' |xargs -I {} bash -c "echo {}; rm {}" || true