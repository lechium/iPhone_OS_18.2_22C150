//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface OTAccountMetadataClassCAccountSettings : PBCodable
{
    _Bool _w;	// 8 = 0x8
    _Bool _webAccess;	// 9 = 0x9
    struct {
        unsigned int w:1;
        unsigned int webAccess:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool webAccess; // @synthesize webAccess=_webAccess;
@property(nonatomic) _Bool w; // @synthesize w=_w;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000174c2
- (unsigned long long)hash;	// IMP=0x001000000001747c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000173ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001732d
- (void)copyTo:(id)arg1;	// IMP=0x00100000000172cf
- (void)writeTo:(id)arg1;	// IMP=0x001000000001725a
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001700b
- (id)dictionaryRepresentation;	// IMP=0x0010000000016f10
- (id)description;	// IMP=0x0010000000016e61
@property(nonatomic) _Bool hasWebAccess;
@property(nonatomic) _Bool hasW;

@end
