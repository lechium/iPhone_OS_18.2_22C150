//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface BCAnnotationRange : PBCodable
{
    unsigned long long _length;	// 8 = 0x8
    unsigned long long _location;	// 16 = 0x10
}

@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000007aebb
- (unsigned long long)hash;	// IMP=0x001000000007ae92
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007ae08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007ada6
- (void)copyTo:(id)arg1;	// IMP=0x001000000007ad82
- (void)writeTo:(id)arg1;	// IMP=0x001000000007ad23
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007ad16
- (id)dictionaryRepresentation;	// IMP=0x001000000007aa15
- (id)description;	// IMP=0x001000000007a966

@end

