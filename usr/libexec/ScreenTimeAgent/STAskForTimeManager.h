//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, STFamilyOrganizationController, STUserNotificationManager;
@protocol STAskForTimeConfigurationProvider, STAskForTimeEventRelay, STAskToManager, STPersistenceControllerProtocol;

@interface STAskForTimeManager : NSObject
{
    STFamilyOrganizationController *_familyOrganizationController;	// 8 = 0x8
    id <STAskForTimeEventRelay> _eventRelay;	// 16 = 0x10
    STUserNotificationManager *_userNotificationManager;	// 24 = 0x18
    id <STPersistenceControllerProtocol> _persistenceController;	// 32 = 0x20
    id <STAskForTimeConfigurationProvider> _askForTimeConfigurationProvider;	// 40 = 0x28
    id <STAskToManager>;	// 48 = 0x30
}

+ (long long)_responseAnswerForAnswer:(long long)arg1 timeApproved:(id *)arg2;	// IMP=0x00200000000110d8
+ (long long)_approvedTimeForResponseAnswer:(long long)arg1 amount:(id)arg2;	// IMP=0x001000000001105f
+ (long long)_resourceTypeForUsageType:(long long)arg1;	// IMP=0x0010000000011048
- (void).cxx_destruct;	// IMP=0x002000000001116b
@property(readonly, nonatomic) id <STAskToManager> askToManager; // @synthesize askToManager=_askToManager;
@property(readonly, nonatomic) id <STAskForTimeConfigurationProvider> askForTimeConfigurationProvider; // @synthesize askForTimeConfigurationProvider=_askForTimeConfigurationProvider;
@property(readonly, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly, nonatomic) STUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
@property(readonly) id <STAskForTimeEventRelay> eventRelay; // @synthesize eventRelay=_eventRelay;
@property(nonatomic) __weak STFamilyOrganizationController *familyOrganizationController; // @synthesize familyOrganizationController=_familyOrganizationController;
- (void)handleAnswer:(long long)arg1 forRequestWithIdentifier:(id)arg2;	// IMP=0x0010000000010edf
- (_Bool)_sendRequestToParents:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000010a53
- (_Bool)_approveAskForTimeRequest:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000010693
- (_Bool)_applyAskForTimeDeclarationsForAnswer:(long long)arg1 usageType:(long long)arg2 requestedResourceIdentifier:(id)arg3 timeGranted:(id)arg4 oneMoreMinute:(_Bool)arg5 toUser:(id)arg6 managedObjectContext:(id)arg7 error:(id *)arg8;	// IMP=0x001000000000fdde
- (void)_handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000ecfd
- (void)_postAskForTimeResponseNotificationWithRespondingUserGivenName:(id)arg1 respondingUserDSID:(id)arg2 respondingUserAltDSID:(id)arg3 respondingUserAppleID:(id)arg4 associatedRequestIdentifier:(id)arg5 answer:(long long)arg6 requestedResourceName:(id)arg7 amountGranted:(id)arg8;	// IMP=0x001000000000e4c1
- (void)handleV2AskForTimeResponsePayload:(id)arg1;	// IMP=0x001000000000d7f9
- (void)_handleAskForTimeResponse:(id)arg1 respondingUserAppleID:(id)arg2;	// IMP=0x001000000000c7f9
- (void)handleAskForTimeResponsePayload:(id)arg1;	// IMP=0x001000000000c62e
- (void)handleAskForTimeRequestPayload:(id)arg1;	// IMP=0x001000000000b3d6
- (void)_handleDisapprovalOfRequest:(id)arg1;	// IMP=0x001000000000b2bb
- (void)_handleApprovalOfRequest:(id)arg1;	// IMP=0x001000000000b194
- (void)handleAnswer:(long long)arg1 requestIdentifier:(id)arg2 timeApproved:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000b037
- (void)fetchLastResponseForRequestedResourceIdentifier:(id)arg1 usageType:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a8d4
- (void)approveExceptionForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a6cf
- (id)_eventForRequest:(id)arg1;	// IMP=0x001000000000a55e
- (void)sendAskForTimeRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000097cb
- (id)initWithPersistenceController:(id)arg1 userNotificationManager:(id)arg2 eventRelay:(id)arg3 askForTimeConfigurationProvider:(id)arg4 askToManager:(id)arg5;	// IMP=0x0010000000009647

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
