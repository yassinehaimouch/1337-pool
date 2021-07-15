#!/bin/sh
cat /etc/passwd |sed -e '1,10d' | sed -n -e '7,15p'| cut -d ':' -f1 | rev |  sort -r | tr '\n' ' ' | sed 's/ /, /g' | rev | sed 's/ ,/./' | rev
