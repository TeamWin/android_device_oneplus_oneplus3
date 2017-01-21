/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>

#include "vendor_init.h"
#include "property_service.h"
#include "util.h"

void vendor_load_properties()
{
	char rf_version[PROP_VALUE_MAX];

	property_get("ro.boot.rf_version", rf_version);

	switch (atoi(rf_version)) {
	/* OnePlus 3 */
	case 11: /* China */
	case 31: /* Americas */
		property_set("ro.product.model", "ONEPLUS A3000");
		property_set("ro.product.device", "OnePlus3");
		property_set("ro.display.series", "OnePlus 3");
		break;
	case 21: /* Asia/Europe */
		property_set("ro.product.model", "ONEPLUS A3003");
		property_set("ro.product.device", "OnePlus3");
		property_set("ro.display.series", "OnePlus 3");
		break;
	/* OnePlus 3T */
	case 12: /* China */
	case 32: /* Americas */
		property_set("ro.product.model", "ONEPLUS A3000");
		property_set("ro.product.device", "OnePlus3T");
		property_set("ro.display.series", "OnePlus 3T");
		break;
	case 22: /* Asia/Europe */
		property_set("ro.product.model", "ONEPLUS A3003");
		property_set("ro.product.device", "OnePlus3T");
		property_set("ro.display.series", "OnePlus 3T");
		break;
	/* default to OnePlus 3 */
	default:
		property_set("ro.product.model", "ONEPLUS A3000");
		property_set("ro.product.device", "OnePlus3");
		property_set("ro.display.series", "OnePlus 3");
	}
}
