//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FRVersionHelpers, MISSING_TYPE, NSDate, NSString, UIViewController;

@interface FRApplicationUpdateNotifier : NSObject
{
    _Bool _isPresentingAlert;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    NSDate *_nextAlertPresentationDate;	// 24 = 0x18
    long long _alertPresentationCount;	// 32 = 0x20
    FRVersionHelpers *_versionHelpers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000002c5fa
@property(retain, nonatomic) FRVersionHelpers *versionHelpers; // @synthesize versionHelpers=_versionHelpers;
@property(nonatomic) _Bool isPresentingAlert; // @synthesize isPresentingAlert=_isPresentingAlert;
@property(nonatomic) long long alertPresentationCount; // @synthesize alertPresentationCount=_alertPresentationCount;
@property(copy, nonatomic) NSDate *nextAlertPresentationDate; // @synthesize nextAlertPresentationDate=_nextAlertPresentationDate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)activityObservingApplicationWindowDidBecomeForeground;	// IMP=0x001000000002c515
- (_Bool)shouldPresentLastAlertForCurrentUpdate;	// IMP=0x001000000002c507
- (_Bool)isAlertPresentationIntervalPassed;	// IMP=0x001000000002c3c7
- (void)launchSettings;	// IMP=0x001000000002c387
- (void)updateAlertDidDismiss:(_Bool)arg1;	// IMP=0x001000000002c2fb
- (void)showAppUpdateAlert;	// IMP=0x001000000002be1f
- (_Bool)shouldShowUpdateAlert;	// IMP=0x001000000002bd89
- (void)persistStates;	// IMP=0x001000000002bb7b
- (MISSING_TYPE *)restoreStates;	// IMP=0x001000000002ba9b
- (id)persistableProperties;	// IMP=0x001000000002ba8e
- (void)setup;	// IMP=0x001000000002ba7c
- (id)initWithVersionHelpers:(id)arg1 appActivityMonitor:(id)arg2;	// IMP=0x001000000002b993
- (id)init;	// IMP=0x001000000002b840

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
