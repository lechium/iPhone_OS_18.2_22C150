//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSXPCMessage, NSObject;
@protocol OS_dispatch_queue;

@protocol FBSServiceFacilityClientMessaging <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
- (void)sendMessage:(FBSXPCMessage *)arg1 withType:(long long)arg2 replyHandler:(void (^)(FBSXPCMessage *))arg3 waitForReply:(_Bool)arg4 timeout:(double)arg5;
- (void)sendMessage:(FBSXPCMessage *)arg1 withType:(long long)arg2;
@end

