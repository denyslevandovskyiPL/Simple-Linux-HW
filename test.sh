#!/bin/bash

shopt -s extglob

`rm -rf !(*.ac|*.am|*.c|*.h|*.sh)`
