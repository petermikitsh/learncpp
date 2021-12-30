#!/usr/bin/env bash

# Log Each command
set -x

# Bail on first error
set -e

g++ -o output program.cpp
