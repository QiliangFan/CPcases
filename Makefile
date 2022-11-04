SUBDIRS = basic function pointer struct

clean:
	@$(foreach dir,$(SUBDIRS), \
		cd $(dir); \
		make clean; \
		cd ..; \
	)

