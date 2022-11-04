SHELL=/bin/zsh

all: case1 case2

run1: case1
	./case1

run2: case2
	./case2

case1: case1.o
	$(CC) $(CFLAGS) $? -o $@

case2: case2.o
	$(CC) $(CFLAGS) $? -o $@

%.o: %.c
	$(CC) -c $(CFLAGS) $^ -o $@

.PHONY: clean

clean:
	@ls *.o | xargs -n 1 -I {} rm {} 
	@ls -lh | grep "^-rwx" | awk '{print $$9}' |xargs -I {} bash -c "echo {}; rm {}" || true