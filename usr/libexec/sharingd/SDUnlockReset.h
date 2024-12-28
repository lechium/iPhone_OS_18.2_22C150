//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SDUnlockReset : PBCodable
{
    NSString *_errorString;	// 8 = 0x8
    unsigned int _resetReason;	// 16 = 0x10
    unsigned int _sessionID;	// 20 = 0x14
    unsigned int _version;	// 24 = 0x18
    struct {
        unsigned int resetReason:1;
        unsigned int sessionID:1;
        unsigned int version:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000006f041
@property(retain, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
@property(nonatomic) unsigned int resetReason; // @synthesize resetReason=_resetReason;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006ef51
- (unsigned long long)hash;	// IMP=0x001000000006eecf
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006edd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006ed00
- (void)copyTo:(id)arg1;	// IMP=0x001000000006ec65
- (void)writeTo:(id)arg1;	// IMP=0x001000000006ebb5
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006eba8
- (id)dictionaryRepresentation;	// IMP=0x001000000006e711
- (id)description;	// IMP=0x001000000006e662
@property(readonly, nonatomic) _Bool hasErrorString;
@property(nonatomic) _Bool hasResetReason;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end
