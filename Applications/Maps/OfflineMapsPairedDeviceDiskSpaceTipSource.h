//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FeatureDiscoveryModel, GEOObserverHashTable, NSString;
@protocol OS_dispatch_queue;

@interface OfflineMapsPairedDeviceDiskSpaceTipSource : NSObject
{
    FeatureDiscoveryModel *_model;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool;	// 24 = 0x18
    _Bool _hasInitialData;	// 25 = 0x19
    _Bool _showFeature;	// 26 = 0x1a
    GEOObserverHashTable *_observers;	// 32 = 0x20
}

+ (id)openManageWatchStorageURL;	// IMP=0x0020000000e6f8a3
+ (id)_actionTitle;	// IMP=0x0010000000e6f837
+ (id)_subtitleWithRequiredDiskSpace:(long long)arg1;	// IMP=0x0010000000e6f721
+ (id)_title;	// IMP=0x0010000000e6f6b5
+ (id)_icon;	// IMP=0x0010000000e6f61e
- (void).cxx_destruct;	// IMP=0x0020000000e6f8de
@property(readonly, nonatomic) _Bool showFeature; // @synthesize showFeature=_showFeature;
@property(readonly, nonatomic) _Bool hasInitialData; // @synthesize hasInitialData=_hasInitialData;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (id)_activePairedDeviceID;	// IMP=0x0010000000e6f59d
- (void)_updateTipShown;	// IMP=0x0010000000e6eefa
- (void)_showTipWithRequiredDiskSpace:(long long)arg1;	// IMP=0x0010000000e6ec2e
- (void)_hideTip;	// IMP=0x0010000000e6ebf9
- (void)_notifyObservers;	// IMP=0x0010000000e6ebbe
- (void)pairedSubscriptionInfosDidChange:(id)arg1;	// IMP=0x0010000000e6ebac
- (void)subscriptionInfosDidChange:(id)arg1;	// IMP=0x0010000000e6eba6
- (id)offlineMapsPairedDeviceDiskSpaceTipModel;	// IMP=0x0010000000e6eb98
@property(readonly, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
- (void)dealloc;	// IMP=0x0010000000e6e7e4
- (id)initWithIsActive:(_Bool)arg1;	// IMP=0x0010000000e6e773

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
