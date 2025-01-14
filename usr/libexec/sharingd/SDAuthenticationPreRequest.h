//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface SDAuthenticationPreRequest : PBRequest
{
    NSString *_sessionID;	// 8 = 0x8
    unsigned int _type;	// 16 = 0x10
    unsigned int _version;	// 20 = 0x14
    CDStruct_8a9ac606 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001e6abd
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001e69f8
- (unsigned long long)hash;	// IMP=0x00100000001e6990
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001e68b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001e6801
- (void)copyTo:(id)arg1;	// IMP=0x00100000001e6781
- (void)writeTo:(id)arg1;	// IMP=0x00100000001e66f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001e66e4
- (id)dictionaryRepresentation;	// IMP=0x00100000001e6354
- (id)description;	// IMP=0x00100000001e62a5
@property(readonly, nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasVersion;

@end

