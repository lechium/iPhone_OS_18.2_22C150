//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GEOMapFeatureMultiSegmentRoadFinder
{
}

- (void)_recursivelyFindRoadSegmentsWithMuid:(unsigned long long)arg1 segments:(id)arg2 directionality:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000d92aa1
- (id)_roadForRoadSegments:(id)arg1;	// IMP=0x0000000000d92a27
- (id)findConnectedSegmentsForRoad:(id)arg1 directionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000d92477
- (id)findConnectedSegmentsForRoads:(id)arg1 directionality:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000d91ec8

@end

