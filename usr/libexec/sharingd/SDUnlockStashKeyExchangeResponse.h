//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSData;

@interface SDUnlockStashKeyExchangeResponse : PBCodable
{
    unsigned int _errorCode;	// 8 = 0x8
    NSData *_key;	// 16 = 0x10
    unsigned int _sessionID;	// 24 = 0x18
    unsigned int _version;	// 28 = 0x1c
    CDStruct_e173124d _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003befc
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003be04
- (unsigned long long)hash;	// IMP=0x001000000003bd66
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003bc55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003bb83
- (void)copyTo:(id)arg1;	// IMP=0x001000000003bae0
- (void)writeTo:(id)arg1;	// IMP=0x001000000003ba31
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003ba24
- (MISSING_TYPE *)dictionaryRepresentation;	// IMP=0x001000000003b599
- (id)description;	// IMP=0x001000000003b4ea
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasKey;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

