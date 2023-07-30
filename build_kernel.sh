#!/bin/bash

# Written by Hakalle (Velosh) <hakalle@proton.me>.
# Written by Philippe MB (sinetek) <pitwuu@gmail.com>.

if [ ! -d gcc-arm64 ]; then
  git clone "https://github.com/KenHV/gcc-arm64/"
fi

# Export KBUILD_BUILD_{USER,HOST} flags.
export KBUILD_BUILD_USER="sinetek"
export KBUILD_BUILD_HOST="github"

# Export ARCH/SUBARCH flags.
export ARCH="arm64"
export SUBARCH="arm64"

# sanitize path
export PATH=/usr/bin
#export PATH=$(pwd)/EvaGCC-arm64/bin:$PATH
export PATH=$(pwd)/gcc-arm64/bin:$PATH

# Export toolchain/clang/llvm flags
export CROSS_COMPILE=aarch64-elf-

# Export if/else outdir var
export WITH_OUTDIR=true

# Clear the console
clear

# Remove out dir folder and clean the source
if [ "${WITH_OUTDIR}" == true ]; then
   if [ -d "$(pwd)/a6" ]; then
      rm -rf a6
   fi
fi

# Build time
if [ "${WITH_OUTDIR}" == true ]; then
   if [ ! -d "$(pwd)/a6" ]; then
      mkdir a6
   fi
fi

if [ "${WITH_OUTDIR}" == true ]; then
   make O="$(pwd)/a6" achilles6_row_wifi_defconfig
   make O="$(pwd)/a6" menuconfig
   make -j12 O="$(pwd)/a6"
fi
