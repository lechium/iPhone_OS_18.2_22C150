//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSNumber, NSString, _TtC10FinanceKit32ManagedPIIRedactionConfiguration, _TtC10FinanceKit36ManagedBankConnectTermsAndConditions;

@interface _TtC10FinanceKit18ManagedInstitution : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000225bc0

// Remaining properties
@property(nonatomic) short authTypeObjects; // @dynamic authTypeObjects;
@property(nonatomic, retain) NSNumber *backgroundRefreshConfirmationExpiryWindow; // @dynamic backgroundRefreshConfirmationExpiryWindow;
@property(nonatomic, retain) NSNumber *backgroundRefreshConfirmationWindow; // @dynamic backgroundRefreshConfirmationWindow;
@property(nonatomic, copy) NSDate *backgroundRefreshRetryAfterDate; // @dynamic backgroundRefreshRetryAfterDate;
@property(nonatomic) _Bool balanceWidgetEnabled; // @dynamic balanceWidgetEnabled;
@property(nonatomic) _Bool consentSyncingEnabled; // @dynamic consentSyncingEnabled;
@property(nonatomic) double consentSyncingOutdatedTokenWaitTimeout; // @dynamic consentSyncingOutdatedTokenWaitTimeout;
@property(nonatomic, copy) NSDate *earliestUpdateRequestStartDate; // @dynamic earliestUpdateRequestStartDate;
@property(nonatomic, copy) NSArray *extensionsBundleIdentifiers; // @dynamic extensionsBundleIdentifiers;
@property(nonatomic) _Bool financialLabEnabled; // @dynamic financialLabEnabled;
@property(nonatomic, retain) NSNumber *firstTransactionsRequestWindow; // @dynamic firstTransactionsRequestWindow;
@property(nonatomic, copy) NSString *id; // @dynamic id;
@property(nonatomic, copy) NSDate *lastBackgroundRefreshDate; // @dynamic lastBackgroundRefreshDate;
@property(nonatomic, copy) NSDate *lastUpdateRequestAttemptDate; // @dynamic lastUpdateRequestAttemptDate;
@property(nonatomic) double maxAgeTransactionsFirstRequest; // @dynamic maxAgeTransactionsFirstRequest;
@property(nonatomic) double maxAgeTransactionsRefreshRequest; // @dynamic maxAgeTransactionsRefreshRequest;
@property(nonatomic) short maximumNumberOfBackgroundRefreshes; // @dynamic maximumNumberOfBackgroundRefreshes;
@property(nonatomic) _Bool multipleConsentsEnabled; // @dynamic multipleConsentsEnabled;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic) short numberOfRemainingBackgroundRefreshes; // @dynamic numberOfRemainingBackgroundRefreshes;
@property(nonatomic, retain) _TtC10FinanceKit32ManagedPIIRedactionConfiguration *piiRedactionConfiguration; // @dynamic piiRedactionConfiguration;
@property(nonatomic) short privacyLabelsValue; // @dynamic privacyLabelsValue;
@property(nonatomic) _Bool problemReportingEnabled; // @dynamic problemReportingEnabled;
@property(nonatomic) short reconsentTypeValue; // @dynamic reconsentTypeValue;
@property(nonatomic) int supportedNotificationEventTypesValue; // @dynamic supportedNotificationEventTypesValue;
@property(nonatomic, retain) _TtC10FinanceKit36ManagedBankConnectTermsAndConditions *termsAndConditionsObject; // @dynamic termsAndConditionsObject;
@property(nonatomic) _Bool timestampSuitableForUserDisplay; // @dynamic timestampSuitableForUserDisplay;
@property(nonatomic) long long updateRequestAttemptCount; // @dynamic updateRequestAttemptCount;

@end
