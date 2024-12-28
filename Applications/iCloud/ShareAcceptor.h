//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDeviceToDeviceShareInvitationToken, CKShareMetadata, CKShareParticipant, NSArray, NSDictionary, NSError, NSPersonNameComponents, NSString, NSURL, NSXPCConnection, RetrievingDialog;

@interface ShareAcceptor : NSObject
{
    _Bool _shouldTerminateAfterFetchingMetadata;	// 8 = 0x8
    _Bool _hasValidConnection;	// 9 = 0x9
    _Bool _accepting;	// 10 = 0xa
    _Bool _cancelled;	// 11 = 0xb
    _Bool _isSourceICS;	// 12 = 0xc
    unsigned long long _backgroundTaskID;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    CKShareMetadata *_shareMetadata;	// 32 = 0x20
    CKContainer *_testTargetContainer;	// 40 = 0x28
    RetrievingDialog *_retrievingDialog;	// 48 = 0x30
    CKDeviceToDeviceShareInvitationToken *_invitationToken;	// 56 = 0x38
    NSString *_shareName;	// 64 = 0x40
    NSArray *_registeredAppBundleIDs;	// 72 = 0x48
    NSArray *_registeredDaemonBundleIDs;	// 80 = 0x50
    NSDictionary *_localBundleIDsToDisplayNames;	// 88 = 0x58
    NSString *_chosenAppBundleID;	// 96 = 0x60
    CKShareParticipant *_singleOONMatch;	// 104 = 0x68
    NSPersonNameComponents *_currentUserNameComponents;	// 112 = 0x70
    NSString *_currentUserFormattedUsername;	// 120 = 0x78
    CKContainer *_metadataIndicatedContainer;	// 128 = 0x80
    NSString *_selectedAccountID;	// 136 = 0x88
    NSXPCConnection *_xpcConnection;	// 144 = 0x90
    long long _state;	// 152 = 0x98
    NSError *_fallbackFlowCause;	// 160 = 0xa0
    NSString *_webFlowReason;	// 168 = 0xa8
    NSDictionary *_unitTestOverrides;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x002000000001078c
@property(retain, nonatomic) NSDictionary *unitTestOverrides; // @synthesize unitTestOverrides=_unitTestOverrides;
@property(nonatomic) _Bool isSourceICS; // @synthesize isSourceICS=_isSourceICS;
@property(retain, nonatomic) NSString *webFlowReason; // @synthesize webFlowReason=_webFlowReason;
@property(retain, nonatomic) NSError *fallbackFlowCause; // @synthesize fallbackFlowCause=_fallbackFlowCause;
@property(nonatomic) long long state; // @synthesize state=_state;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool accepting; // @synthesize accepting=_accepting;
@property(nonatomic) _Bool hasValidConnection; // @synthesize hasValidConnection=_hasValidConnection;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(copy, nonatomic) NSString *selectedAccountID; // @synthesize selectedAccountID=_selectedAccountID;
@property(retain, nonatomic) CKContainer *metadataIndicatedContainer; // @synthesize metadataIndicatedContainer=_metadataIndicatedContainer;
@property(copy, nonatomic) NSString *currentUserFormattedUsername; // @synthesize currentUserFormattedUsername=_currentUserFormattedUsername;
@property(copy, nonatomic) NSPersonNameComponents *currentUserNameComponents; // @synthesize currentUserNameComponents=_currentUserNameComponents;
@property(copy, nonatomic) CKShareParticipant *singleOONMatch; // @synthesize singleOONMatch=_singleOONMatch;
@property(copy, nonatomic) NSString *chosenAppBundleID; // @synthesize chosenAppBundleID=_chosenAppBundleID;
@property(copy, nonatomic) NSDictionary *localBundleIDsToDisplayNames; // @synthesize localBundleIDsToDisplayNames=_localBundleIDsToDisplayNames;
@property(copy, nonatomic) NSArray *registeredDaemonBundleIDs; // @synthesize registeredDaemonBundleIDs=_registeredDaemonBundleIDs;
@property(copy, nonatomic) NSArray *registeredAppBundleIDs; // @synthesize registeredAppBundleIDs=_registeredAppBundleIDs;
@property(copy, nonatomic) NSString *shareName; // @synthesize shareName=_shareName;
@property(copy, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken; // @synthesize invitationToken=_invitationToken;
@property(readonly, nonatomic) RetrievingDialog *retrievingDialog; // @synthesize retrievingDialog=_retrievingDialog;
@property(retain, nonatomic) CKContainer *testTargetContainer; // @synthesize testTargetContainer=_testTargetContainer;
@property(copy, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(nonatomic) _Bool shouldTerminateAfterFetchingMetadata; // @synthesize shouldTerminateAfterFetchingMetadata=_shouldTerminateAfterFetchingMetadata;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
- (void)acceptShareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fe18
- (_Bool)makeStateTransition:(id *)arg1;	// IMP=0x001000000000f3f5
- (_Bool)_launchApp:(id *)arg1;	// IMP=0x001000000000f08f
- (long long)_handlePotentialOONMatches;	// IMP=0x001000000000eff0
- (_Bool)_checkDataclassError:(id *)arg1;	// IMP=0x001000000000ed4c
- (_Bool)_verifySelectedApp:(id *)arg1;	// IMP=0x001000000000e9a8
- (_Bool)_authenticateUsers:(id *)arg1;	// IMP=0x001000000000e6ed
- (_Bool)_promptAppSelection:(id *)arg1;	// IMP=0x001000000000e41e
- (long long)_lookUpLocalBundleIDs:(id *)arg1 success:(_Bool *)arg2;	// IMP=0x001000000000e2f3
- (_Bool)_handlePotentialAppleInternalDaemon:(id *)arg1;	// IMP=0x001000000000d362
- (_Bool)_handleAppleInternalDaemon:(id)arg1 response:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000d23d
- (_Bool)_lookUpRegisteredBundleIDs:(id *)arg1;	// IMP=0x001000000000c912
- (_Bool)_urlHasALongToken:(id)arg1;	// IMP=0x001000000000c4a5
- (_Bool)_urlIsALegacyiWorkShareURL:(id)arg1;	// IMP=0x001000000000c44c
- (_Bool)_fetchMetadata:(id *)arg1;	// IMP=0x001000000000ba75
- (_Bool)_notifyBladeRunner:(id *)arg1;	// IMP=0x001000000000b94f
- (_Bool)_validateShareURL:(id *)arg1;	// IMP=0x001000000000b8a9
- (id)_iosShowAppSelectionDialogWithTitlesDictionary:(id)arg1;	// IMP=0x001000000000b5b9
- (id)chooseFromMultipleBundleIDs;	// IMP=0x001000000000b52d
- (id)_deduplicateBundleToNamesMapping:(id)arg1;	// IMP=0x001000000000b374
- (void)_initiateVettingForParticipantID:(id)arg1 address:(id)arg2 andThen:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b084
- (id)_iosShowVettingAlert;	// IMP=0x001000000000a1df
- (_Bool)_requestSelectionFromMultipleOONMatches:(id *)arg1;	// IMP=0x001000000000a11a
- (_Bool)_initiateVettingOfSingleOONMatch:(id *)arg1;	// IMP=0x0010000000009917
- (long long)initiateVetting;	// IMP=0x001000000000989f
- (id)_showVettingAlert;	// IMP=0x001000000000988d
- (id)_trySelectingOONParticipant;	// IMP=0x0010000000008c7d
- (void)_extractEmailAddressesFromProperties:(id)arg1 into:(id)arg2;	// IMP=0x001000000000882e
- (_Bool)_getShareName;	// IMP=0x001000000000861e
- (id)promptForSingleBundleID;	// IMP=0x0010000000007cc6
- (id)_fetchCurrentUserNameComponents;	// IMP=0x0010000000007a50
- (_Bool)shareNeedsAcceptance;	// IMP=0x00100000000079c4
- (id)_fetchShareMetadataForAccountID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000712d
- (id)_promptForAccountIDChoiceWithAccountIDsByUsername:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006d26
- (id)fetchMetadata;	// IMP=0x001000000000604f
- (long long)_checkRepresentativeDataclassEnabled:(id *)arg1 appCandidatesPresent:(_Bool)arg2;	// IMP=0x0010000000005af0
- (_Bool)_promptToOpenAppStoreLink:(id *)arg1 alertOptions:(id)arg2 appURL:(id)arg3;	// IMP=0x00100000000056fd
- (id)_findStoreDataForBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000004c42
- (_Bool)_fallbackFlowDownloadAppUpdate:(id *)arg1;	// IMP=0x0010000000004826
- (_Bool)_fallbackFlowDownloadApp:(id *)arg1;	// IMP=0x00100000000043d7
- (id)_iOSwatchOSHandleMultipleAppStoreCandidates:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000424b
- (_Bool)_fallbackFlowWebRedirect:(id *)arg1;	// IMP=0x0010000000003a37
- (_Bool)_fallbackFlowWarnShareUnavailable:(id *)arg1;	// IMP=0x0010000000003852
- (_Bool)_fallbackFlowWarnServiceUnavailable:(id *)arg1;	// IMP=0x001000000000372f
- (_Bool)_fallbackFlowWarnNetworkUnavailable:(id *)arg1;	// IMP=0x001000000000360c
- (long long)_fallbackFlowICloudAccountSettings:(id *)arg1 success:(_Bool *)arg2;	// IMP=0x0010000000003269
- (_Bool)_shouldSendURLToPhotos:(id)arg1;	// IMP=0x0010000000003156
- (_Bool)_shouldSendURLToBladeRunner:(id)arg1;	// IMP=0x001000000000302c
- (_Bool)_urlIsAniWorkShareURL:(id)arg1;	// IMP=0x0010000000002f19
- (void)retrievingDialogCancelled;	// IMP=0x0010000000002f07
- (_Bool)retrievingDialogShouldDisplay;	// IMP=0x0010000000002ea1
- (_Bool)shouldShowRetrievingDialogForState:(long long)arg1;	// IMP=0x0010000000002e87
- (_Bool)_shouldShowICloudLoginPrompt:(id)arg1;	// IMP=0x0010000000002b38
- (void)_cancel;	// IMP=0x0010000000002b21
- (id)initWithShareMetadata:(id)arg1 shareURL:(id)arg2;	// IMP=0x0010000000002ac2
- (id)initWithCloudKitURL:(id)arg1 invitationToken:(id)arg2 isSourceICS:(_Bool)arg3 unitTestOverrides:(id)arg4;	// IMP=0x0010000000002a0b
- (id)initWithCloudKitURL:(id)arg1;	// IMP=0x001000000000294c

@end
