//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDialogRequest, AMSEngagement, AMSEngagementRequest, MISSING_TYPE, NSString;

@interface _TtC24FitnessEngagementServiceP33_BEC6C0704903DD2FBF3B8EA6FBD9907426MarketingPlacementObserver : NSObject
{
    MISSING_TYPE *placement;	// 8 = 0x8
    MISSING_TYPE *onRequestUpdateForDialogPlacement;	// 16 = 0x10
    MISSING_TYPE *onRequestUpdateForEngagementPlacement;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000048ee00
- (id)init;	// IMP=0x000000000048eda0
- (void)engagement:(AMSEngagement *)arg1 handleEngagementRequest:(AMSEngagementRequest *)arg2 completion:(void (^)(AMSEngagementResult *, NSError *))arg3;	// IMP=0x000000000048f600
- (void)engagement:(AMSEngagement *)arg1 handleDialogRequest:(AMSDialogRequest *)arg2 completion:(void (^)(AMSDialogResult *, NSError *))arg3;	// IMP=0x000000000048f380
- (void)engagement:(AMSEngagement *)arg1 didUpdateEngagementRequest:(AMSEngagementRequest *)arg2 placement:(NSString *)arg3 serviceType:(NSString *)arg4 completion:(void (^)(AMSEngagementResult *, NSError *))arg5;	// IMP=0x000000000048f050
- (void)engagement:(id)arg1 didUpdateRequest:(id)arg2 placement:(id)arg3 serviceType:(id)arg4;	// IMP=0x000000000048efc0

@end
