GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.73.2
COMPILE=/home/conda/feedstock_root/build_artifacts/icu_1692900319679/_build_env/bin/aarch64-conda-linux-gnu-cc -DNDEBUG -D_FORTIFY_SOURCE=2 -O2 -isystem /home/georg/miniforge3/include -D_REENTRANT  -DU_HAVE_ELF_H=1 -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=1  -DU_ATTRIBUTE_DEPRECATED= -ftree-vectorize -fPIC -fstack-protector-strong -fno-plt -O3 -pipe -isystem /home/georg/miniforge3/include -fdebug-prefix-map=/home/conda/feedstock_root/build_artifacts/icu_1692900319679/work=/usr/local/src/conda/icu-73.2 -fdebug-prefix-map=/home/georg/miniforge3=/usr/local/src/conda-prefix -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -c
LIBFLAGS=-I/home/georg/miniforge3/include -DPIC -fPIC
GENLIB=/home/conda/feedstock_root/build_artifacts/icu_1692900319679/_build_env/bin/aarch64-conda-linux-gnu-cc -ftree-vectorize -fPIC -fstack-protector-strong -fno-plt -O3 -pipe -isystem /home/georg/miniforge3/include -fdebug-prefix-map=/home/conda/feedstock_root/build_artifacts/icu_1692900319679/work=/usr/local/src/conda/icu-73.2 -fdebug-prefix-map=/home/georg/miniforge3=/usr/local/src/conda-prefix -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -Wl,-O2 -Wl,--sort-common -Wl,--as-needed -Wl,-z,relro -Wl,-z,now -Wl,--allow-shlib-undefined -Wl,-rpath,/home/georg/miniforge3/lib -Wl,-rpath-link,/home/georg/miniforge3/lib -L/home/georg/miniforge3/lib  -shared -Wl,-Bsymbolic
LDICUDTFLAGS=-nodefaultlibs -nostdlib
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=/home/conda/feedstock_root/build_artifacts/icu_1692900319679/_build_env/bin/aarch64-conda-linux-gnu-ar
ARFLAGS=r
RANLIB=/home/conda/feedstock_root/build_artifacts/icu_1692900319679/_build_env/bin/aarch64-conda-linux-gnu-ranlib
INSTALL_CMD=/usr/bin/install -c
