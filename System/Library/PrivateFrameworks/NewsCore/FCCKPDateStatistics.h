//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class FCCKPDate;

__attribute__((visibility("hidden")))
@interface FCCKPDateStatistics : PBCodable
{
    FCCKPDate *_creation;	// 8 = 0x8
    FCCKPDate *_modification;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000fe5ec
- (unsigned long long)hash;	// IMP=0x00000000000fe517
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fe45f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fe3c1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fe364
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fe357
- (id)dictionaryRepresentation;	// IMP=0x00000000000fe0cd
- (id)description;	// IMP=0x00000000000fe01e

@end
