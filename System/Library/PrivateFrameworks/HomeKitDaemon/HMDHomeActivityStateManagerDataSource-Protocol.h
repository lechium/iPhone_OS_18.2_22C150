//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMCContext, HMDBackgroundTaskManager, HMDBulletinBoard, HMDHome, HMDHomeAdministratorHandler, HMDLocation, HMDResidentDevice, HMDUserPresenceFeeder, HMFMessageDispatcher, HMFPreferences, HMFTimer, NSDate, NSNotificationCenter, NSObject, NSString;
@protocol HMDFeaturesDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

@protocol HMDHomeActivityStateManagerDataSource <NSObject>
@property(readonly, nonatomic) HMCContext *workingStoreContext;
@property(readonly, nonatomic) double reportValidityInterval;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(readonly, nonatomic) HMFPreferences *preferences;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property(readonly, nonatomic) NSString *logIdentifier;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter;
@property(readonly, nonatomic) HMDLocation *location;
@property(readonly, nonatomic) __weak HMDHome *home;
@property(readonly, nonatomic) id <HMDFeaturesDataSource> featuresDataSource;
@property(readonly, nonatomic) HMDResidentDevice *currentPrimaryResident;
@property(readonly, copy, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic) HMDBulletinBoard *bulletinBoard;
@property(readonly, nonatomic) HMDBackgroundTaskManager *backgroundTaskManager;
@property(readonly, nonatomic) HMDHomeAdministratorHandler *administratorHandler;
@property(readonly, nonatomic) _Bool isResidentCapable;
@property(readonly, nonatomic) _Bool isEligibleForFMFDesignation;
@property(readonly, nonatomic) _Bool isDesignatedFMFDevice;
@property(readonly, nonatomic) _Bool isCurrentDeviceConfirmedPrimaryResident;
@property(readonly, nonatomic) _Bool hasFinishedLoadingHomeData;
- (HMDUserPresenceFeeder *)createPresenceFeeder;
- (HMFTimer *)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
@end
