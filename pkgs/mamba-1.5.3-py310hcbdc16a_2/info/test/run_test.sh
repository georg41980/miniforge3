

set -ex



mamba --help
test -f ${PREFIX}/etc/profile.d/mamba.sh
mamba create -n test_py2 python=2.7 --dry-run
python -c "import mamba._version; assert mamba._version.__version__ == '1.5.3'"
test -f ${PREFIX}/condabin/mamba
exit 0
