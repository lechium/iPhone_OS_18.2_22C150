//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPLibraryObjectDatabase, MPModelLibrarySearchRequest, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject
{
    MPLibraryObjectDatabase *_lod;	// 8 = 0x8
    NSArray *_resultContainers;	// 16 = 0x10
    MPModelLibrarySearchRequest *_request;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002a122c
@property(copy, nonatomic) MPModelLibrarySearchRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSArray *resultContainers; // @synthesize resultContainers=_resultContainers;
- (long long)searchWeightForIndexPath:(id)arg1;	// IMP=0x00000000002a0c89
- (_Bool)hasMoreResultsForSectionAtIndex:(long long)arg1;	// IMP=0x00000000002a0a03
- (id)identifiersForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002a0210
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x000000000029fd0b
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x000000000029fa5f
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000029f9f7
- (unsigned long long)numberOfSections;	// IMP=0x000000000029f9e1
- (id)initWithEntitiesQueryResultContainers:(id)arg1 libraryObjectDatabase:(id)arg2;	// IMP=0x000000000029f90d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

