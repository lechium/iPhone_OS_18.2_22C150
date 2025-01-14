//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MADBackgroundSystemTask : NSObject
{
    struct atomic<bool> _cancelledByDAS;	// 8 = 0x8
}

+ (void)updateTask;	// IMP=0x0040000000017114
+ (_Bool)runRemote;	// IMP=0x001000000001710c
+ (_Bool)buddyCheckRequired;	// IMP=0x0010000000017104
+ (_Bool)ignoreCancellation;	// IMP=0x00100000000170fc
+ (id)rateLimitConfigurationName;	// IMP=0x0010000000016a67
+ (_Bool)networkConnectivityRequired;	// IMP=0x0010000000016a4d
+ (_Bool)inexpensiveNetworkConnectivityRequired;	// IMP=0x0010000000016a45
+ (double)expectedDuration;	// IMP=0x0010000000016a37
+ (_Bool)resourceIntensive;	// IMP=0x0010000000016a2f
+ (_Bool)externalPowerRequired;	// IMP=0x0010000000016a27
+ (long long)activityDelayInSeconds;	// IMP=0x0010000000016a1c
+ (unsigned long long)taskID;	// IMP=0x0010000000016a00
+ (id)identifier;	// IMP=0x00100000000169e4
+ (id)sharedTask;	// IMP=0x00100000000169c8
+ (void)notImplementedException:(id)arg1;	// IMP=0x0010000000016909
- (void)registerTask;	// IMP=0x002000000001711a
- (void)executeWithCancelBlock:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000170db
- (void)executeWithSystemTask:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000170c3
- (void)executeWith:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000170a2
- (_Bool)oneShot;	// IMP=0x001000000001709a
- (void)submitTask:(id *)arg1;	// IMP=0x0010000000016a6f

@end

