//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, STDebouncer;
@protocol STPersistenceControllerProtocol, STRequestManagerDelegate;

@interface STRequestManager : NSObject
{
    id <STRequestManagerDelegate> _delegate;	// 8 = 0x8
    NSString *_organizationIdentifier;	// 16 = 0x10
    id <STPersistenceControllerProtocol> _persistenceController;	// 24 = 0x18
    NSString *_currentBlueprintHash;	// 32 = 0x20
    STDebouncer *_changeNotificationDebouncer;	// 40 = 0x28
}

+ (void)_performDeviceManagementRequest:(id)arg1;	// IMP=0x002000000008d113
+ (_Bool)_bundleIdentifiersContainCommunicationBundleIdentifier:(id)arg1;	// IMP=0x001000000008c461
- (void).cxx_destruct;	// IMP=0x002000000008d7f2
@property(readonly) STDebouncer *changeNotificationDebouncer; // @synthesize changeNotificationDebouncer=_changeNotificationDebouncer;
@property(copy, nonatomic) NSString *currentBlueprintHash; // @synthesize currentBlueprintHash=_currentBlueprintHash;
@property(readonly, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly, copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property(nonatomic) __weak id <STRequestManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)operationToSendStatusUpdate:(id)arg1;	// IMP=0x001000000008d5c2
- (id)_expiredNotificationTimesForPredicates:(id)arg1;	// IMP=0x001000000008d2fa
- (void)_updateWithImageGenerationThenPerformRequest:(id)arg1 requestPayload:(id)arg2;	// IMP=0x001000000008c903
- (void)_processDeclarationsPayload:(id)arg1;	// IMP=0x001000000008c5e2
- (void)_processStatusPayload:(id)arg1;	// IMP=0x001000000008a4c5
- (void)installFromRequest:(id)arg1;	// IMP=0x001000000008a2ec
- (void)persistBlueprintsFromBlueprintPayload:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008a045
- (void)_processBlueprintChanges;	// IMP=0x0010000000089d7a
- (void)debouncer:(id)arg1 didDebounce:(id)arg2;	// IMP=0x0010000000089d09
- (void)processBlueprintChanges;	// IMP=0x0010000000089c55
- (void)invalidate;	// IMP=0x0010000000089bb8
- (id)initWithOrganizationIdentifier:(id)arg1 persistenceController:(id)arg2;	// IMP=0x0010000000089ab6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
