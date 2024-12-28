//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@class NSArray, NSURL;

@interface NSSet (SafariCoreExtras)
@property(readonly, copy, nonatomic) NSArray *safari_sortedArrayUsingFinderLikeSorting;
- (id)safari_setByRemovingObject:(id)arg1;	// IMP=0x003000000004d6c3
@property(readonly, nonatomic) NSURL *safari_shortestURL;
- (_Bool)safari_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x003000000004d581
- (_Bool)safari_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x003000000004d54e
- (id)safari_anyObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x003000000004d3f8
- (id)safari_smallestObject:(CDUnknownBlockType)arg1;	// IMP=0x003000000004d235
- (id)safari_mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x003000000004d038
- (id)safari_dictionaryByMappingObjectsToValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x003000000004ce40
- (id)safari_arrayByMappingObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x003000000004cc58
@end
