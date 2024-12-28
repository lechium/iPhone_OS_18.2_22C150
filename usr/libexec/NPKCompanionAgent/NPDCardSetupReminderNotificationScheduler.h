//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NPDCardSetupReminderNotificationSchedulerDelegate;

@interface NPDCardSetupReminderNotificationScheduler : NSObject
{
    id <NPDCardSetupReminderNotificationSchedulerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000002dd1
@property(nonatomic) __weak id <NPDCardSetupReminderNotificationSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_secondReminderNameForWatchPaymentPassWithUniqueID:(id)arg1;	// IMP=0x0010000000002d91
- (id)_firstReminderNameForWatchPaymentPassWithUniqueID:(id)arg1;	// IMP=0x0010000000002d78
- (id)_reminderNameForCompanionPaymentPassWithUniqueID:(id)arg1;	// IMP=0x0010000000002d5f
- (void)_scheduleReminderWithName:(id)arg1 forDate:(id)arg2;	// IMP=0x0010000000002c17
- (void)_removeReminderWithName:(id)arg1;	// IMP=0x0010000000002b1b
- (_Bool)_hasReminderWithName:(id)arg1;	// IMP=0x0010000000002a16
- (void)_handleVerificationReminderForWatchPaymentPassWithUniqueID:(id)arg1;	// IMP=0x00100000000028cb
- (void)_handleSetupReminderForCompanionPaymentPassWithUniqueID:(id)arg1;	// IMP=0x0010000000002413
- (void)noteWatchPaymentPassRemovedWithUniqueID:(id)arg1;	// IMP=0x0010000000002348
- (void)noteWatchPaymentPassNeedsVerificationWithUniqueID:(id)arg1;	// IMP=0x0010000000002118
- (void)noteWatchSetupCompleted;	// IMP=0x0010000000002112
- (void)noteOfferDisplayedForCompanionPaymentPassWithUniqueID:(id)arg1;	// IMP=0x0010000000001fd2
- (void)noteCompanionPaymentPassRemovedWithUniqueID:(id)arg1;	// IMP=0x0010000000001eb3
- (void)noteCompanionPaymentPassActivatedWithUniqueID:(id)arg1 pairedTerminalIdentifier:(id)arg2;	// IMP=0x0010000000001a85
- (void)noteCompanionPaymentPassAddedWithUniqueID:(id)arg1 pairedTerminalIdentifier:(id)arg2;	// IMP=0x00100000000015b0
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000000014cf
- (void)dealloc;	// IMP=0x0010000000001492
- (id)init;	// IMP=0x0010000000001440

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
