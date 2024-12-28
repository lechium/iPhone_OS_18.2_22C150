//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface SDUnlockStateResponse : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    _Bool _passcodeEnabled;	// 12 = 0xc
    _Bool _unlockEnabled;	// 13 = 0xd
    struct {
        unsigned int version:1;
        unsigned int passcodeEnabled:1;
        unsigned int unlockEnabled:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool passcodeEnabled; // @synthesize passcodeEnabled=_passcodeEnabled;
@property(nonatomic) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000125a85
- (unsigned long long)hash;	// IMP=0x0010000000125a1f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000125932
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000125898
- (void)copyTo:(id)arg1;	// IMP=0x0010000000125821
- (void)writeTo:(id)arg1;	// IMP=0x001000000012578c
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000012577f
- (id)dictionaryRepresentation;	// IMP=0x0010000000125357
- (id)description;	// IMP=0x00100000001252a8
@property(nonatomic) _Bool hasPasscodeEnabled;
@property(nonatomic) _Bool hasUnlockEnabled;
@property(nonatomic) _Bool hasVersion;

@end
