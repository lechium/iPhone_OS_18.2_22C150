//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC10NewsDaemon27LiveActivityScheduleRequest;

@interface _TtC5newsd19LiveActivityService : NSObject
{
    MISSING_TYPE *liveActivityLauncher;	// 8 = 0x8
    MISSING_TYPE *liveActivityRepository;	// 48 = 0x30
    MISSING_TYPE *currentConnection;	// 88 = 0x58
    MISSING_TYPE *maxSubscriptionDelay;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00400000000225b0
- (id)init;	// IMP=0x0010000000022550
- (void)cancelScheduledLiveActivityWithId:(NSString *)arg1 backgroundTaskID:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x0010000000022270
- (void)scheduleLiveActivityWithRequest:(_TtC10NewsDaemon27LiveActivityScheduleRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0010000000021ff0

@end
