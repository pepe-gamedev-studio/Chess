#!/bin/bash
fragment=$(cat .vs_fragment)

while IFS='' read -r line || [[ -n "$line" ]]; do
    if [[ $line == *"<IncludePath>"* ]]; then
        echo "$fragment"
    else
        echo "$line"
    fi
done