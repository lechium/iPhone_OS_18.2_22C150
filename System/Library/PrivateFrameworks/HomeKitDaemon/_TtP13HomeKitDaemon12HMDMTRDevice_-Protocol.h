//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class MTRReadParams, NSArray, NSDictionary, NSNumber, OS_dispatch_queue;
@protocol MTRDeviceDelegate;

@protocol _TtP13HomeKitDaemon12HMDMTRDevice_ <NSObject>
- (NSDictionary *)readAttributeWithEndpointID:(NSNumber *)arg1 clusterID:(NSNumber *)arg2 attributeID:(NSNumber *)arg3 params:(MTRReadParams *)arg4;
- (void)removeDelegate:(id <MTRDeviceDelegate>)arg1;
- (void)addDelegate:(id <MTRDeviceDelegate>)arg1 queue:(OS_dispatch_queue *)arg2 interestedPathsForAttributes:(NSArray *)arg3 interestedPathsForEvents:(NSArray *)arg4;
@end
