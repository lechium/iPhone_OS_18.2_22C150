//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface SDAuthenticationPairingRequest : PBRequest
{
    NSData *_longTermKey;	// 8 = 0x8
    NSString *_sessionID;	// 16 = 0x10
    unsigned int _type;	// 24 = 0x18
    unsigned int _version;	// 28 = 0x1c
    CDStruct_8a9ac606 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010189c
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000101792
- (unsigned long long)hash;	// IMP=0x00100000001016f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001015e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000101506
- (void)copyTo:(id)arg1;	// IMP=0x0010000000101466
- (void)writeTo:(id)arg1;	// IMP=0x00100000001013b9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001013ac
- (id)dictionaryRepresentation;	// IMP=0x0010000000100fbb
- (id)description;	// IMP=0x0010000000100f0c
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasVersion;

@end

