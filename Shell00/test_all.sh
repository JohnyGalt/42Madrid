#!/bin/bash
#test script for exercices Shell00 ex00-ex05

echo "===== Testing ex00 ====="
cat ex00/z
ls -l ex00/z

echo -e "\n===== Testing ex01====="
tar -tvf ex01/testShell00.tar

echo -e "\n===== Testing ex02====="
tar -tvf ex02/exo2.tar

echo -e "\n===== Testing ex03====="
head -n 3 ex03/id_rsa_pub

echo -e "\n===== Testing ex04====="
cat ex04/midLS
bash ex04/midLS

echo -e "\n===== Testing ex05====="
cat ex05/git_commit.sh
bash ex05/git_commit.sh | cat -e
