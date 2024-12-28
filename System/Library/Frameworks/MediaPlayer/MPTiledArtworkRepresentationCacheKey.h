//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MPTiledArtworkRepresentationCacheKey : NSObject
{
    id _entityIdentifier;	// 8 = 0x8
    id _namespaceIdentifier;	// 16 = 0x10
    unsigned long long _numberOfColumns;	// 24 = 0x18
    unsigned long long _numberOfRows;	// 32 = 0x20
    id _revisionIdentifier;	// 40 = 0x28
    struct CGSize _scaledFittingSize;	// 48 = 0x30
    double _tileSpacing;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000004cda0
- (id)stringRepresentation;	// IMP=0x000000000004cd61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004cd56
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004cc04
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithTiledArtworkRequest:(id)arg1 scaledFittingSize:(struct CGSize)arg2;	// IMP=0x000000000004c860
- (id)init;	// IMP=0x000000000004c83c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
