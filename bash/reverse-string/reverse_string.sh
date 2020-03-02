#!/usr/bin/env bash
set -f
main() {
	copy="$@"
	count=${#copy}
	for ((i=$count-1;i>=0;i--)); do rev="${rev}${copy:$i:1}"; done
	#echo $rev
	echo $@ | rev
}

main "$@"
