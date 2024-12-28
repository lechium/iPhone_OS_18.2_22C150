//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSMutableSet, NSString, NSTimer;

@interface TrafficIncidentsStorageManager : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    NSMutableSet *_trafficIncidentFeatures;	// 16 = 0x10
    NSTimer *_reportsExpirationTimer;	// 24 = 0x18
    NSTimer *_reportsResubmissionTimer;	// 32 = 0x20
}

+ (long long)creationPreference;	// IMP=0x00200000002a5a03
+ (id)sharedInstance;	// IMP=0x00100000002a47b0
- (void).cxx_destruct;	// IMP=0x00200000002a5a50
@property(retain, nonatomic) NSTimer *reportsResubmissionTimer; // @synthesize reportsResubmissionTimer=_reportsResubmissionTimer;
- (id);	// IMP=0x00100000002a5a35
@property(retain, nonatomic) NSTimer *reportsExpirationTimer; // @synthesize reportsExpirationTimer=_reportsExpirationTimer;
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000002a5a14
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000002a5a0e
- (void)_deleteExpiredReports;	// IMP=0x00100000002a575a
- (void)_startExpirationRefresh;	// IMP=0x00100000002a56df
- (void)clearCache;	// IMP=0x00100000002a564f
- (void)_updateTrafficIncidentFeatures;	// IMP=0x00100000002a551c
- (id)_trafficIncidentFeaturesUniqueIds;	// IMP=0x00100000002a54b9
- (id)_reports;	// IMP=0x00100000002a5235
- (void)_removeReport:(id)arg1;	// IMP=0x00100000002a50ec
- (void)_addReport:(id)arg1;	// IMP=0x00100000002a4f67
- (id)_sharedUserDefaults;	// IMP=0x00100000002a4f4e
- (void)removeObserver:(id)arg1;	// IMP=0x00100000002a4ee5
- (void)addObserver:(id)arg1;	// IMP=0x00100000002a4e7c
- (id)observers;	// IMP=0x00100000002a4e23
- (id)removedTrafficIncidentFeaturesIds;	// IMP=0x00100000002a4dc0
- (void)removeTrafficIncidentFeature:(id)arg1;	// IMP=0x00100000002a4d13
- (void)resubmitLastReport;	// IMP=0x00100000002a4aa2
- (void)_didModifyExistingReport:(id)arg1;	// IMP=0x00100000002a4a25
- (id)visibleReports;	// IMP=0x00100000002a4985
- (void)hideReport:(id)arg1;	// IMP=0x00100000002a48fd
- (void)removeReport:(id)arg1;	// IMP=0x00100000002a48b0
- (void)addReport:(id)arg1;	// IMP=0x00100000002a4805
- (void)dealloc;	// IMP=0x00100000002a46f1
- (id)init;	// IMP=0x00100000002a467e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
