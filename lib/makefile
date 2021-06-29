LIBSRC=dump.o args.o gentree.o
libaux.a:$(LIBSRC)
	ar -r $@ $^

%.o:%.cpp
	gcc -c -o $@ -g $<
	
clean:
	rm $(LIBSRC)
