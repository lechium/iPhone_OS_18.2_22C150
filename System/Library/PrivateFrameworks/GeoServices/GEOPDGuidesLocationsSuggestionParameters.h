//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDViewportInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuidesLocationsSuggestionParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDViewportInfo *_viewportInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000496ebf
- (unsigned long long)hash;	// IMP=0x0000000000496ea2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000496e12
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000496d87
- (void)writeTo:(id)arg1;	// IMP=0x0000000000496d2c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000496d1d
- (id)jsonRepresentation;	// IMP=0x00000000004969bc
- (id)dictionaryRepresentation;	// IMP=0x00000000004967c9
- (id)description;	// IMP=0x000000000049671a

@end
