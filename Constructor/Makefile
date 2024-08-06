# Makefile cho 3 tệp main.cpp, lib.cpp, lib.h

# Biến
CC = g++
CFLAGS = -Wall -std=c++11
OBJS = main.o lib.o
TARGET = mymain

# Quy tắc biên dịch
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Quy tắc liên kết
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Xóa tệp đối tượng và tệp thực thi
clean:
	rm -f $(OBJS) $(TARGET)
