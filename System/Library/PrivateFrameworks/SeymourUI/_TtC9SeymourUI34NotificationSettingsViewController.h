//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC9SeymourUI34NotificationSettingsViewController : UIViewController
{
    MISSING_TYPE *accountProvider;	// 8 = 0x8
    MISSING_TYPE *browsingStringBuilder;	// 48 = 0x30
    MISSING_TYPE *contentAvailabilityClient;	// 96 = 0x60
    MISSING_TYPE *eventHub;	// 136 = 0x88
    MISSING_TYPE *fitnessModeObserver;	// 152 = 0x98
    MISSING_TYPE *networkEvaluator;	// 192 = 0xc0
    MISSING_TYPE *notificationSettingsProvider;	// 232 = 0xe8
    MISSING_TYPE *storefrontLocalizer;	// 272 = 0x110
    MISSING_TYPE *subscriptionToken;	// 312 = 0x138
    MISSING_TYPE *syncManager;	// 320 = 0x140
    MISSING_TYPE *tableView;	// 328 = 0x148
    MISSING_TYPE *platform;	// 336 = 0x150
    MISSING_TYPE *wheelchairStatus;	// 344 = 0x158
    MISSING_TYPE *contentUnavailableView;	// 384 = 0x180
    MISSING_TYPE *loadingView;	// 392 = 0x188
    MISSING_TYPE *spinnerView;	// 400 = 0x190
    MISSING_TYPE *fitnessPlusSettingsResult;	// 408 = 0x198
    MISSING_TYPE *notifyToken;	// 420 = 0x1a4
    MISSING_TYPE *_fitnessPlusNotificationSettingsEnabled;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000894270
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000897d50
- (void)switchTappedWithCellSwitch:(id)arg1;	// IMP=0x00000000008974a0
- (void)updateSettings;	// IMP=0x0000000000896a60
- (void)viewDidLoad;	// IMP=0x0000000000895620
- (void)dealloc;	// IMP=0x00000000008941d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000894130
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000898410
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000008983e0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000898320
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000897df0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000897d90

@end
