#!/usr/bin/env bash

qemu-system-arm -m 256 -M raspi2 -serial stdio -kernel kernel.elf
