#!/bin/bash 

git log | grep -E "^commit*" -m 5 | cut -c 8-47
