//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDDatabaseManager, PDPaymentWebServiceCoordinator, PDUserNotificationManager, PKSecureElement;

@interface PDPassVerificationManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDUserNotificationManager *_userNotificationManager;	// 16 = 0x10
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 24 = 0x18
    PKSecureElement *_secureElement;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001ef98f
- (void)_sendPrecursorActionReminderNotificationForPass:(id)arg1 precursorController:(id)arg2;	// IMP=0x00100000001ef6f1
- (void)_sendVerificationReminderNotificationForPass:(id)arg1;	// IMP=0x00100000001ef560
- (unsigned long long)_isVerificationRequiredForPass:(id)arg1;	// IMP=0x00100000001ef403
- (void)_checkVerificationStatusForUniqueID:(id)arg1;	// IMP=0x00100000001ef1e4
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000001ef08e
- (void)_scheduleVerificationCheckForPass:(id)arg1 onDate:(id)arg2;	// IMP=0x00100000001eef1d
- (void)connect;	// IMP=0x00100000001eee8b
- (void)passWillBeRemoved:(id)arg1;	// IMP=0x00100000001eeb85
- (void)passAddedOrUpdated:(id)arg1;	// IMP=0x00100000001eea1d
- (id)initWithDatabaseManager:(id)arg1 userNotificationManager:(id)arg2 webServiceCoordinator:(id)arg3 secureElement:(id)arg4;	// IMP=0x00100000001ee935

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

