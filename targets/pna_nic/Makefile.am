if COND_NANOMSG
MAYBE_TESTS = tests
endif

SUBDIRS = . $(MAYBE_TESTS)

noinst_LTLIBRARIES = libpnanic.la

libpnanic_la_SOURCES = \
 pna_nic.cpp pna_nic.h \
 externs/pna_counter.h externs/pna_counter.cpp \
 externs/pna_meter.h externs/pna_meter.cpp \
 externs/pna_random.h externs/pna_random.cpp \
 externs/pna_internet_checksum.h externs/pna_internet_checksum.cpp \
 externs/pna_hash.h externs/pna_hash.cpp \
 externs/pna_crypto_accelerator.h externs/pna_crypto_accelerator.cpp

libpnanic_la_LIBADD = \
$(top_builddir)/src/bm_sim/libbmsim.la \
$(top_builddir)/src/bf_lpm_trie/libbflpmtrie.la \
$(top_builddir)/src/BMI/libbmi.la \
$(top_builddir)/third_party/jsoncpp/libjson.la \
-lboost_system $(THRIFT_LIB) -lboost_program_options -lboost_filesystem

if COND_THRIFT
psa_switch_thrift_py_files =
psa_switch_thrift_files = \
gen-cpp/bm/pna_nic_constants.cpp \
gen-cpp/bm/psa_nic_constants.h \
gen-cpp/bm/PsaSwitch.cpp \
gen-cpp/bm/PsaSwitch.h \
gen-cpp/bm/psa_switch_types.cpp \
gen-cpp/bm/psa_switch_types.h

BUILT_SOURCES =

#pswitchpydir = $(pythondir)/pswitch_runtime
#nodist_pswitchpy_PYTHON = $(psa_switch_thrift_py_files)

python_PYTHON =

AM_CPPFLAGS += \
-I$(srcdir)/thrift/src/ \
-I$(builddir)/gen-cpp

bin_PROGRAMS = pna_nic


pna_nic_LDADD = \
$(top_builddir)/src/bm_runtime/libbmruntime.la \
$(top_builddir)/thrift_src/libruntimestubs.la \
libpnanic.la

pna_nic_SOURCES = main.cpp

CLEANFILES = $(BUILT_SOURCES) \
thrift_files.ts \
$(bind_SCRIPTS)

# I used to do a rm on gen-cpp, but it was removing a .deps directory, instead I
# am adding the skeleton file to CLEANFILES
clean-local:
	rm -rf gen-py

endif  # COND_THRIFT
