//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCProfileServiceServer;
@protocol OS_dispatch_queue;

@interface MCBackgroundActivityManager : NSObject
{
    int _profileChangeNotificationToken;	// 8 = 0x8
    int _managedAppChangeNotificationToken;	// 12 = 0xc
    int _passcodeChangedNotificationToken;	// 16 = 0x10
    int _passcodePolicyChangedNotificationToken;	// 20 = 0x14
    MCProfileServiceServer *_server;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001e8c6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) int passcodePolicyChangedNotificationToken; // @synthesize passcodePolicyChangedNotificationToken=_passcodePolicyChangedNotificationToken;
@property(nonatomic) int passcodeChangedNotificationToken; // @synthesize passcodeChangedNotificationToken=_passcodeChangedNotificationToken;
@property(nonatomic) int managedAppChangeNotificationToken; // @synthesize managedAppChangeNotificationToken=_managedAppChangeNotificationToken;
@property(nonatomic) int profileChangeNotificationToken; // @synthesize profileChangeNotificationToken=_profileChangeNotificationToken;
@property(nonatomic) __weak MCProfileServiceServer *server; // @synthesize server=_server;
- (void)_workQueueReschedule:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 priority:(const char *)arg4 repeatingInterval:(id)arg5;	// IMP=0x001000000001e739
- (void)_rescheduleBackgroundActivity:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 priority:(const char *)arg4 repeatingInterval:(id)arg5;	// IMP=0x001000000001e5d1
- (void)scheduleRecomputeNagMetadataJob;	// IMP=0x001000000001e4df
- (void)_workQueueRescheduleRecoveryPasscodeExpiryJob;	// IMP=0x001000000001e297
- (void)rescheduleRecoveryPasscodeExpiryJob;	// IMP=0x001000000001e236
- (void)_workQueueReschedulePasscodeExpiryJob;	// IMP=0x001000000001e171
- (void)reschedulePasscodeExpiryJob;	// IMP=0x001000000001e110
- (void)rescheduleManagedAppValidationJob:(id)arg1;	// IMP=0x001000000001e0df
- (void)rescheduleManagedAppValidationJob;	// IMP=0x001000000001e071
- (void)rescheduleProfileJanitorJob;	// IMP=0x001000000001df26
- (void)_handleXPCActivity:(long long)arg1 proposedStartDate:(id)arg2 normalizeStartDate:(_Bool)arg3 proposedGracePeriod:(id)arg4 proposedPriority:(const char *)arg5 repeatingInterval:(id)arg6 requireNetwork:(_Bool)arg7 requireUnlock:(_Bool)arg8;	// IMP=0x001000000001ded3
- (id)_jobDescriptionForBackgroundActivityType:(long long)arg1;	// IMP=0x001000000001deaf
- (const char *)_jobNameForBackgroundActivityType:(long long)arg1;	// IMP=0x001000000001de8a
- (id)_nextManagedAppValidationDateWithOverride:(id)arg1;	// IMP=0x001000000001ddf3
- (id)_nextActivationLockCleanupDate;	// IMP=0x001000000001dd67
- (id)_nextRegularDate;	// IMP=0x001000000001dbde
- (void)activationLockBypassCodeWasStored:(id)arg1;	// IMP=0x001000000001dafe
- (void)stop;	// IMP=0x001000000001da5e
- (void);	// IMP=0x001000000001d292

@end

