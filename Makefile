CC = clang
CFLAGS = -Wall -Wextra -std=c11

run:
	$(CC) $(CFLAGS) $(FILE) -o /tmp/a.out && /tmp/a.out
