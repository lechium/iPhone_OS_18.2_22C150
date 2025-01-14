//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _MPCProtoContainerIdentifierSet;

__attribute__((visibility("hidden")))
@interface _MPCProtoContainer : PBCodable
{
    int _containerType;	// 8 = 0x8
    _MPCProtoContainerIdentifierSet *_identifierSet;	// 16 = 0x10
    NSMutableArray *_items;	// 24 = 0x18
    NSString *_playActivityFeatureName;	// 32 = 0x20
    NSString *_playActivityQueueGroupingID;	// 40 = 0x28
    struct {
        unsigned int containerType:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000299ab2
- (unsigned long long)hash;	// IMP=0x0000000000299a00
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002998be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000299677
- (void)writeTo:(id)arg1;	// IMP=0x00000000002994b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002994ab
- (id)dictionaryRepresentation;	// IMP=0x0000000000299172
- (id)description;	// IMP=0x00000000002990c3

@end

