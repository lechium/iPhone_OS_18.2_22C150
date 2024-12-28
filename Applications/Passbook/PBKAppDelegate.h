//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class CLInUseAssertion, NSDate, NSMutableArray, NSObject, NSString, PKLaunchAuthorizationPromptController, PKPassGroupsViewController, SBSAssertion, UIWindow;
@protocol BSInvalidatable, OS_dispatch_queue, PKPassLibraryDataProvider;

@interface PBKAppDelegate : UIResponder
{
    UIWindow *_window;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_foregroundActiveResourcesBackgroundQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_discoveryItemsBackgroundQueue;	// 24 = 0x18
    _Bool _foregroundActive;	// 32 = 0x20
    _Bool _foregroundActiveResourcesCreated;	// 33 = 0x21
    _Bool _didBecomeActiveOnce;	// 34 = 0x22
    _Bool _fetchingAsynchronousForegroundActiveResources;	// 35 = 0x23
    _Bool _suspendedReportingWalletProvisioning;	// 36 = 0x24
    _Bool _needsOnScreenPresentation;	// 37 = 0x25
    _Bool _needsRegionSupportUpdate;	// 38 = 0x26
    NSMutableArray *_blocksQueuedForForegroundExecution;	// 40 = 0x28
    id _staticGlyphResources;	// 48 = 0x30
    CLInUseAssertion *_inUseAssertion;	// 56 = 0x38
    id <BSInvalidatable> _lockButtonObserver;	// 64 = 0x40
    SBSAssertion *_lockButtonAssertion;	// 72 = 0x48
    _Bool _brightnessRampingAllowed;	// 80 = 0x50
    id <PKPassLibraryDataProvider> _dataProvider;	// 88 = 0x58
    _Bool _locationAuthorizationNotNeeded;	// 96 = 0x60
    NSDate *_lastTimeAppWasDismissed;	// 104 = 0x68
    PKLaunchAuthorizationPromptController *_launchAuthorizationPromptController;	// 112 = 0x70
    PKPassGroupsViewController *_cardsViewController;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000012a64
@property(readonly, nonatomic) PKPassGroupsViewController *cardsViewController; // @synthesize cardsViewController=_cardsViewController;
- (void)presentAccountServiceSchedulePaymentWithUniqueID:(id)arg1 billPayAmountType:(long long)arg2 billPayAmount:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000012878
- (void)presentSearchForPassWithUniqueID:(id)arg1 withQuery:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001264e
- (void)presentAddMoneyForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012413
- (void)sharePassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012102
- (void)handleDeletePassRequestWithPass:(id)arg1;	// IMP=0x0010000000011f48
- (void)presentDeletePassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011a93
- (_Bool)_isValidRelayServerURL:(id)arg1 outPathComponents:(id *)arg2;	// IMP=0x00100000000117a0
- (void)_executeWhenApplicationForegroundActive:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011711
- (void)_executeForegroundActiveBlocksIfPossible;	// IMP=0x0010000000011591
- (id)applicationDocumentsDirectory;	// IMP=0x0010000000011506
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;	// IMP=0x0010000000011397
- (_Bool)_shouldEndSubjectReportingWallet;	// IMP=0x0010000000011377
- (_Bool)_shouldBeginSubjectReportingWallet;	// IMP=0x0010000000011357
- (void)_destroyForegroundActiveResources;	// IMP=0x001000000001118a
- (void)_createForegroundActiveResources;	// IMP=0x0010000000010899
- (void)_setForegroundActive:(_Bool)arg1;	// IMP=0x00100000000107d4
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_3d581f42)arg2;	// IMP=0x00100000000107ba
- (_Bool)application:(id)arg1 shouldSaveSecureApplicationState:(id)arg2;	// IMP=0x00100000000106fd
- (_Bool)application:(id)arg1 shouldRestoreSecureApplicationState:(id)arg2;	// IMP=0x001000000001067b
- (void)_presentLaunchPromptsIfNeeded;	// IMP=0x00100000000105fa
- (void)presentLaunchPromptViewController:(id)arg1;	// IMP=0x00100000000105d5
- (_Bool)canPresentLaunchPrompts;	// IMP=0x0010000000010583
@property(retain, nonatomic) UIWindow *window;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIWindow",?,&,N

- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000fffc
- (void);	// IMP=0x001000000000f904
- (void)_handleUniversalLinkWithUserActivity:(id)arg1;	// IMP=0x001000000000f2d8
- (void)openSettingsForNotification:(id)arg1;	// IMP=0x001000000000f0fe
- (void)willPresentNotification:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f0e5
- (_Bool)_handleWalletUniversalLinkableURLWithHost:(id)arg1 pathComponents:(id)arg2 urlComponents:(id)arg3;	// IMP=0x0010000000009073
- (id)_parseReferrerIdentifier:(id)arg1;	// IMP=0x0010000000008e07
- (void)_presentBankConnectAuthorizationViewControllerWithRedirectURL:(id)arg1;	// IMP=0x0010000000008d4d
- (id)_bankConnectAuthorizationRedirectURLFromPathComponents:(id)arg1 queryItems:(id)arg2;	// IMP=0x0010000000008a64
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00100000000037e9
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003455
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000328a
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x001000000000322b
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0010000000002f98
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00100000000028e7
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00100000000027e2
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x001000000000279e
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000002371
- (void)dealloc;	// IMP=0x00100000000022bf
- (id)init;	// IMP=0x00100000000020fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
