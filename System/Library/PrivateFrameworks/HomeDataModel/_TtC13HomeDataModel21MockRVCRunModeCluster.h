//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Matter/MTRClusterRVCRunMode.h>

@class MISSING_TYPE, MTRRVCRunModeClusterChangeToModeParams, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface _TtC13HomeDataModel21MockRVCRunModeCluster : MTRClusterRVCRunMode
{
    MISSING_TYPE *attributes;	// 8 = 0x8
    MISSING_TYPE *commandObserver;	// 16 = 0x10
    MISSING_TYPE *changeToModeBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000cd830
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;	// IMP=0x00000000000cd7e0
- (void)changeToModeWithParams:(MTRRVCRunModeClusterChangeToModeParams *)arg1 expectedValues:(NSArray *)arg2 expectedValueInterval:(NSNumber *)arg3 completion:(void (^)(MTRRVCRunModeClusterChangeToModeResponseParams *, NSError *))arg4;	// IMP=0x00000000000cd4a0

@end
