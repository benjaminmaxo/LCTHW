.PHONY : compile clean

compile:
	meson compile -C builddir

clean:
	meson compile --clean -C builddir
