/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FANSHoldClearance_H_
#define	_FANSHoldClearance_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSPosition.h"
#include "FANSAltitude.h"
#include "FANSDegrees.h"
#include "FANSDirection.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSLegType;

/* FANSHoldClearance */
typedef struct FANSHoldClearance {
	FANSPosition_t	 position;
	FANSAltitude_t	 altitude;
	FANSDegrees_t	 degrees;
	FANSDirection_t	 direction;
	struct FANSLegType	*legType	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSHoldClearance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSHoldClearance;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FANSLegType.h"

#endif	/* _FANSHoldClearance_H_ */
#include <asn_internal.h>
