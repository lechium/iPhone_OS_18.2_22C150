//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class PGGraph, PGGraphFeatureNodeCollection, PGGraphMomentNodeCollection;

@protocol PGGraphMemoryProtocol <NSObject>
@property(readonly, nonatomic) _Bool generatedWithFallbackRequirements;
@property(readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property(readonly, nonatomic) unsigned long long memoryCategorySubcategory;
@property(readonly, nonatomic) unsigned long long memoryCategory;
- (PGGraphFeatureNodeCollection *)memoryFeatureNodesInGraph:(PGGraph *)arg1;
@end
