//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNUniqueObservationClassCompoundRequest
{
    NSMapTable *_requestToObservationClassMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000043c259
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;	// IMP=0x000000000043be24
- (id)initWithOriginalRequests:(id)arg1 requestToObservationClassMap:(id)arg2;	// IMP=0x000000000043bdac
- (id)initWithSubrequests:(id)arg1 uniqueObservationClasses:(id)arg2;	// IMP=0x000000000043bc56

@end

