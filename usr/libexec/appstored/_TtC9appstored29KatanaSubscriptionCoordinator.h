//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9appstored29KatanaSubscriptionCoordinator : NSObject
{
    MISSING_TYPE *hardwareBundlePromoScenarios;	// 8 = 0x8
    MISSING_TYPE *logger;	// 0 = 0x0
}

+ (id)shared;	// IMP=0x0020000000028590
- (void).cxx_destruct;	// IMP=0x004000000002e680
- (_Bool)updateSubscriptionInfoWithEntitlement:(id)arg1 account:(id)arg2 logKey:(id)arg3;	// IMP=0x001000000002b190
- (id)subscriptionInfoDictionaryWithAccount:(id)arg1 onlyReturnForPreviouslySubscribedAccount:(_Bool)arg2 logKey:(id)arg3;	// IMP=0x001000000002a530
- (_Bool)removeStaleSubscriptionInfoWithLogKey:(id)arg1;	// IMP=0x0010000000029f80
- (_Bool)migrateSubscriptionStateWithAccount:(id)arg1 logKey:(id)arg2;	// IMP=0x0010000000029720
- (id)init;	// IMP=0x0010000000028540

@end
