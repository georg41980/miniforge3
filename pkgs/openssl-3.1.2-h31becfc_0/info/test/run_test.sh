

set -ex



touch checksum.txt
$PREFIX/bin/openssl sha256 checksum.txt
pkg-config --print-errors --exact-version "3.1.2" openssl
exit 0
