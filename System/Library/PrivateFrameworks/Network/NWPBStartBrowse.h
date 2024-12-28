//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NWPBBrowseDescriptor, NWPBParameters;

__attribute__((visibility("hidden")))
@interface NWPBStartBrowse : PBCodable
{
    NSString *_clientUUID;	// 8 = 0x8
    NWPBBrowseDescriptor *_descriptor;	// 16 = 0x10
    NWPBParameters *_parameters;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000009649f0
- (unsigned long long)hash;	// IMP=0x0000000000964980
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009648a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009647d0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000964750
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000964280
- (id)dictionaryRepresentation;	// IMP=0x0000000000964180
- (id)description;	// IMP=0x00000000009640d0

@end
