#!/bin/sh

echo "\n================== EX00 =================="
cat ex00/z 2>/dev/null || echo "❌ ex00/z not found or unreadable"

echo "\n================== EX01 =================="
export FT_USER=$USER
sh ex01/print_groups.sh || echo "❌ ex01 failed"

echo "\n================== EX02 =================="
sh ex02/find_sh.sh || echo "❌ ex02 failed"

echo "\n================== EX03 =================="
sh ex03/count_files.sh || echo "❌ ex03 failed"

echo "\n================== EX04 =================="
sh ex04/MAC.sh || echo "❌ ex04 failed"

echo "\n================== EX05 =================="
ls -lRa ex05/*MaRV* | cat -e || echo "❌ ex05 file missing or invalid"

echo "\n================== EX06 =================="
sh ex06/skip.sh || echo "❌ ex06 failed"

echo "\n================== EX07 =================="
export FT_LINE1=7
export FT_LINE2=15
sh ex07/r_dwssap.sh || echo "❌ ex07 failed"

echo "\n✅ Done checking ex00–ex07"

