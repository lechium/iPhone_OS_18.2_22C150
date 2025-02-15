//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSBag, NSData, NSString;

@interface AMSDPushRegisterTask : AMSTask
{
    ACAccount *_account;	// 8 = 0x8
    AMSBag *_bag;	// 16 = 0x10
    NSString *_environment;	// 24 = 0x18
    NSData *_token;	// 32 = 0x20
}

+ (void)_updateThrottleForAccount:(id)arg1 environment:(id)arg2 throttleTime:(id)arg3;	// IMP=0x00400000000426f7
+ (void)_updateThrottleForAccount:(id)arg1 environment:(id)arg2;	// IMP=0x0010000000042656
+ (_Bool)_shouldThrottleForAccount:(id)arg1 environment:(id)arg2 currentTimestamp:(double)arg3;	// IMP=0x0010000000042379
+ (_Bool)_shouldThrottleForAccount:(id)arg1 environment:(id)arg2;	// IMP=0x00100000000422f6
+ (id)_createCriteriaWithToken:(id)arg1;	// IMP=0x001000000004220e
+ (id)shouldPerformForAccount:(id)arg1 environment:(id)arg2 token:(id)arg3;	// IMP=0x00100000000417db
- (void).cxx_destruct;	// IMP=0x00200000000428f0
@property(readonly, copy, nonatomic) NSData *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_updateCachedCriteriaWithToken:(id)arg1;	// IMP=0x0010000000042495
- (id)perform;	// IMP=0x0010000000040b8f
- (id)initWithAccount:(id)arg1 token:(id)arg2 environment:(id)arg3 bag:(id)arg4;	// IMP=0x0010000000040a77

@end

