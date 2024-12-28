//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPDate, CKDPIdentifier, CKDPShareIdentifier, NSString;

@interface CKDPShareUsage : PBCodable
{
    CKDPIdentifier *_deviceIdentifier;	// 8 = 0x8
    NSString *_participantHandle;	// 16 = 0x10
    CKDPShareIdentifier *_shareIdentifier;	// 24 = 0x18
    CKDPDate *_time;	// 32 = 0x20
    CKDPIdentifier *_userIdentifier;	// 40 = 0x28
    int _version;	// 48 = 0x30
    CDStruct_f20694ce _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000387558
@property(retain, nonatomic) NSString *participantHandle; // @synthesize participantHandle=_participantHandle;
@property(retain, nonatomic) CKDPShareIdentifier *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;
@property(retain, nonatomic) CKDPIdentifier *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(retain, nonatomic) CKDPIdentifier *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) CKDPDate *time; // @synthesize time=_time;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000387364
- (unsigned long long)hash;	// IMP=0x0000000000387297
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000387129
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000386ff5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000386f12
- (void)writeTo:(id)arg1;	// IMP=0x0000000000386e38
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000386af7
- (id)dictionaryRepresentation;	// IMP=0x0000000000386907
- (id)description;	// IMP=0x0000000000386858
@property(readonly, nonatomic) _Bool hasParticipantHandle;
@property(readonly, nonatomic) _Bool hasShareIdentifier;
@property(readonly, nonatomic) _Bool hasUserIdentifier;
@property(readonly, nonatomic) _Bool hasDeviceIdentifier;
@property(readonly, nonatomic) _Bool hasTime;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) int version; // @synthesize version=_version;

@end
