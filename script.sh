#!/bin/bash
cat /proc/cpuinfo | grep flag | head -1
cd /home/grid/testbed/tb058/lab/vec_samples/src 
ml icc
array=( "-xSSE2" "-xSSE3" "-xAVX"  )
for a in "${array[@]}"; do
  for b in {1..3}; do
    chuslo1=$(date +%M)
    chuslo2=$(date +%S)
    echo icpc -std=c++17 -O$b $a lab.cpp -o file-$chuslo1-$chuslo2
    icpc -std=c++17 -O$b $a lab.cpp -o file-$chuslo1-$chuslo2
    echo "$a $b:"
    time ./file-$chuslo1-$chuslo2
  done 
done