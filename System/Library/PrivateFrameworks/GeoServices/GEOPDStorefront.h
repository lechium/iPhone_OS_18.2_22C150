//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDStorefront : PBCodable
{
    NSMutableArray *_bundleIds;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000098cac4
- (unsigned long long)hash;	// IMP=0x000000000098caa4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000098ca14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000098c876
- (void)writeTo:(id)arg1;	// IMP=0x000000000098c740
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000098c731
- (id)jsonRepresentation;	// IMP=0x000000000098be69
- (id)dictionaryRepresentation;	// IMP=0x000000000098bbe9
- (id)description;	// IMP=0x000000000098bb3a

@end
