//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface WCDProtoInstalledAppsChanged : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002c6be
- (unsigned long long)hash;	// IMP=0x001000000002c694
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002c602
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002c5a0
- (void)copyTo:(id)arg1;	// IMP=0x001000000002c57c
- (void)writeTo:(id)arg1;	// IMP=0x001000000002c551
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002c544
- (id)dictionaryRepresentation;	// IMP=0x001000000002c2f6
- (id)description;	// IMP=0x001000000002c247
@property(nonatomic) _Bool hasVersion;

@end

