#!/bin/bash

shopt -s extglob

`sudo rm -rf !(*.ac|*.am|*.c|*.h|*.sh|*.md)`
