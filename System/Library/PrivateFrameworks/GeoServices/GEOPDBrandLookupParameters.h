//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrandLookupParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_imessageUid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000046053b
- (unsigned long long)hash;	// IMP=0x000000000046051e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046048e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000460403
- (void)writeTo:(id)arg1;	// IMP=0x00000000004603a8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000046039b
- (id)jsonRepresentation;	// IMP=0x00000000004600a9
- (id)dictionaryRepresentation;	// IMP=0x000000000045ff0a
- (id)description;	// IMP=0x000000000045fe5b

@end

