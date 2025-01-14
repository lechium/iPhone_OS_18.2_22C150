//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class OTApplicantToSponsorRound2M1, OTSponsorToApplicantRound1M2, OTSponsorToApplicantRound2M2, OTSupportOctagonMessage, OTSupportSOSMessage;

__attribute__((visibility("hidden")))
@interface OTPairingMessage : PBCodable
{
    OTSponsorToApplicantRound1M2 *_epoch;	// 8 = 0x8
    OTApplicantToSponsorRound2M1 *_prepare;	// 16 = 0x10
    OTSupportOctagonMessage *_supportsOctagon;	// 24 = 0x18
    OTSupportSOSMessage *_supportsSOS;	// 32 = 0x20
    OTSponsorToApplicantRound2M2 *_voucher;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001934c
@property(retain, nonatomic) OTSupportSOSMessage *supportsSOS; // @synthesize supportsSOS=_supportsSOS;
@property(retain, nonatomic) OTSupportOctagonMessage *supportsOctagon; // @synthesize supportsOctagon=_supportsOctagon;
@property(retain, nonatomic) OTSponsorToApplicantRound2M2 *voucher; // @synthesize voucher=_voucher;
@property(retain, nonatomic) OTApplicantToSponsorRound2M1 *prepare; // @synthesize prepare=_prepare;
@property(retain, nonatomic) OTSponsorToApplicantRound1M2 *epoch; // @synthesize epoch=_epoch;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000019162
- (unsigned long long)hash;	// IMP=0x00000000000190c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018f8b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018e73
- (void)copyTo:(id)arg1;	// IMP=0x0000000000018db0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000018cfc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000189e6
- (id)dictionaryRepresentation;	// IMP=0x000000000001882d
- (id)description;	// IMP=0x000000000001877e
@property(readonly, nonatomic) _Bool hasSupportsSOS;
@property(readonly, nonatomic) _Bool hasSupportsOctagon;
@property(readonly, nonatomic) _Bool hasVoucher;
@property(readonly, nonatomic) _Bool hasPrepare;
@property(readonly, nonatomic) _Bool hasEpoch;

@end

