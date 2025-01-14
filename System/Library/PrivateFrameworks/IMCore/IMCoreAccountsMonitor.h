//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount;
@protocol OS_dispatch_queue;

@interface IMCoreAccountsMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ACAccount *_cachedPrimaryAppleAccount;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000001788c3
- (void).cxx_destruct;	// IMP=0x0000000000178d56
- (void)accountStoreDidChange:(id)arg1;	// IMP=0x0000000000178bf6
- (id)_cachedPrimaryAppleAccount;	// IMP=0x000000000017894b
@property(readonly, nonatomic) _Bool isSignedIntoiCloud;
- (id)init;	// IMP=0x00000000001787bb

@end

