############################################################################
# apps/netutils/tinyssh/Makefile
#
# SPDX-License-Identifier: Apache-2.0
#
# Licensed to the Apache Software Foundation (ASF) under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.  The
# ASF licenses this file to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance with the
# License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
# License for the specific language governing permissions and limitations
# under the License.
#
############################################################################

include $(APPDIR)/Make.defs

# Tiny SSH server built-in application info

PROGNAME  = $(CONFIG_NETUTILS_TINYSSH_PROGNAME)
PRIORITY  = $(CONFIG_NETUTILS_TINYSSH_PRIORITY)
STACKSIZE = $(CONFIG_NETUTILS_TINYSSH_STACKSIZE)
MODULE    = $(CONFIG_NETUTILS_TINYSSH)

# Tiny SSH server
CFLAGS += -Icryptoint
MAINSRC = tinysshd.c

CSRCS += blocking.c
CSRCS += buf.c
CSRCS += byte.c
CSRCS += channel.c
CSRCS += channel_drop.c
CSRCS += channel_fork.c
CSRCS += channel_forkpty.c
CSRCS += channel_subsystem.c
CSRCS += cleanup.c
CSRCS += coe.c
CSRCS += connectioninfo.c
CSRCS += crypto_dh_x25519.c
CSRCS += crypto_hash_sha256.c
CSRCS += crypto_hash_sha512_lib25519.c
CSRCS += crypto_hash_sha512_tinyssh.c
CSRCS += crypto_kem_sntrup761_libntruprime.c
CSRCS += crypto_kem_sntrup761_tinyssh.c
CSRCS += crypto_kem_sntrup761x25519.c
CSRCS += crypto_onetimeauth_poly1305_lib1305.c
CSRCS += crypto_onetimeauth_poly1305_tinyssh.c
CSRCS += crypto_scalarmult_curve25519.c
CSRCS += crypto_sign_ed25519_lib25519.c
CSRCS += crypto_sign_ed25519_tinyssh.c
CSRCS += crypto_sort_uint32.c
CSRCS += crypto_stream_chacha20.c
CSRCS += crypto_verify_16.c
CSRCS += crypto_verify_32.c
CSRCS += die.c
CSRCS += dropuidgid.c
CSRCS += e.c
CSRCS += env.c
CSRCS += fe25519.c
CSRCS += fe.c
CSRCS += ge25519.c
CSRCS += getln.c
CSRCS += global.c
CSRCS += int16_optblocker.c
CSRCS += int32_optblocker.c
CSRCS += int64_optblocker.c
CSRCS += int8_optblocker.c
CSRCS += iptostr.c
CSRCS += load.c
CSRCS += log.c
CSRCS += loginshell.c
CSRCS += logsys.c
CSRCS += main_tinysshd.c
CSRCS += main_tinysshd_makekey.c
CSRCS += main_tinysshd_printkey.c
CSRCS += newenv.c
CSRCS += numtostr.c
CSRCS += open.c
CSRCS += packet_auth.c
CSRCS += packet.c
CSRCS += packet_channel_open.c
CSRCS += packet_channel_recv.c
CSRCS += packet_channel_request.c
CSRCS += packet_channel_send.c
CSRCS += packet_get.c
CSRCS += packet_hello.c
CSRCS += packet_kex.c
CSRCS += packet_kexdh.c
CSRCS += packetparser.c
CSRCS += packet_put.c
CSRCS += packet_recv.c
CSRCS += packet_send.c
CSRCS += packet_unimplemented.c
CSRCS += porttostr.c
CSRCS += randommod.c
CSRCS += readall.c
CSRCS += savesync.c
CSRCS += sc25519.c
CSRCS += ssh.c
CSRCS += sshcrypto.c
CSRCS += sshcrypto_cipher.c
CSRCS += sshcrypto_cipher_chachapoly.c
CSRCS += sshcrypto_kex.c
CSRCS += sshcrypto_kex_curve25519.c
CSRCS += sshcrypto_kex_sntrup761x25519.c
CSRCS += sshcrypto_key.c
CSRCS += sshcrypto_key_ed25519.c
CSRCS += str.c
CSRCS += stringparser.c
CSRCS += subprocess_auth.c
CSRCS += subprocess_sign.c
CSRCS += trymlock.c
CSRCS += uint16_optblocker.c
CSRCS += uint32_optblocker.c
CSRCS += uint64_optblocker.c
CSRCS += uint8_optblocker.c
CSRCS += writeall.c
CSRCS += randombytes.c

include $(APPDIR)/Application.mk
