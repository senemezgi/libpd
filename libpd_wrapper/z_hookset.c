/*
 * Copyright (c) 2012 Tebjan Halm (tebjan@vvvv.org)
 *
 * For information on usage and redistribution, and for a DISCLAIMER OF ALL
 * WARRANTIES, see the file, "LICENSE.txt," in this distribution.
 *
 * See https://github.com/libpd/libpd/wiki for documentation
 *
 */

#include "z_hookset.h"

/* set hooks */

void libpd_set_printhook(const t_libpd_printhook hook){
	libpd_printhook = hook;
}


