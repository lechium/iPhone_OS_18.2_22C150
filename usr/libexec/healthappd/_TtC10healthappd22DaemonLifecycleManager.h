//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC10healthappd22DaemonLifecycleManager : NSObject
{
    MISSING_TYPE *signalDebuggingResponderListener;	// 8 = 0x8
    MISSING_TYPE *healthExperienceStoreOracle;	// 16 = 0x10
    MISSING_TYPE *longRunningProcessOracle;	// 24 = 0x18
    MISSING_TYPE *countryOracle;	// 32 = 0x20
    MISSING_TYPE *healthStore;	// 40 = 0x28
    MISSING_TYPE *profileStore;	// 48 = 0x30
    MISSING_TYPE *feedPopulationManagerOracle;	// 56 = 0x38
    MISSING_TYPE *targetQueue;	// 64 = 0x40
    MISSING_TYPE *healthPluginHostListener;	// 72 = 0x48
    MISSING_TYPE *listener;	// 80 = 0x50
    MISSING_TYPE *backgroundGenerationActivity;	// 88 = 0x58
    MISSING_TYPE *localeChangeObserver;	// 96 = 0x60
    MISSING_TYPE *notificationManager;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000007160
- (id)init;	// IMP=0x00100000000081d0
- (void)storeDidUpdateWithNote:(id)arg1;	// IMP=0x00100000000081b0
@property(nonatomic, readonly) NSString *description;
- (void)dealloc;	// IMP=0x0010000000007140
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000008900
- (void)debuggingInfoRequestedWithNote:(id)arg1;	// IMP=0x0010000000008b10

@end

