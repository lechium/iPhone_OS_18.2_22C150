//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ReminderKit/REMAppleAccountUtilities.h>

@interface REMAppleAccountUtilities (DataSeparation_RDAdditions)
- (id)_applicationDocumentsURLForPersonaIdentifier:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x0020000000004ce7
- (id)reminderDataContainerURLForAccountIdentifier:(id)arg1;	// IMP=0x0010000000004c90
- (id)applicationDocumentsURLForAccountIdentifier:(id)arg1;	// IMP=0x001000000000486e
- (void)_unsetMigrationFlagsWithACAccount:(id)arg1 inStore:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008a496
- (id)status;	// IMP=0x0010000000089a5f
- (id)unsafeUntilSystemReady_allICloudAccountsWithCloudKitEnabled;	// IMP=0x001000000008983f
@end
