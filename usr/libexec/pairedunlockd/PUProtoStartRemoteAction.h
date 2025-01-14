//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PUProtoStartRemoteAction : PBCodable
{
    unsigned int _actionID;	// 8 = 0x8
    unsigned int _passcodeType;	// 12 = 0xc
    struct {
        unsigned int passcodeType:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int passcodeType; // @synthesize passcodeType=_passcodeType;
@property(nonatomic) unsigned int actionID; // @synthesize actionID=_actionID;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000a4d6
- (unsigned long long)hash;	// IMP=0x001000000000a49b
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000a3f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000a38a
- (void)copyTo:(id)arg1;	// IMP=0x001000000000a359
- (void)writeTo:(id)arg1;	// IMP=0x001000000000a2f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000a2eb
- (id)dictionaryRepresentation;	// IMP=0x0010000000009fcc
- (id)description;	// IMP=0x0010000000009f1d
@property(nonatomic) _Bool hasPasscodeType;

@end

