//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BuddySimpleTCController, NRTermsEvent, NSMutableArray, NSString, RUILoader, RUIObjectModel, RUIPage, UIViewController;
@protocol COSBuddyControllerDelegate;

@interface COSTermsConditionsController : NSObject
{
    RUIObjectModel *_rootObjectModel;	// 8 = 0x8
    _Bool _appearingFromBackNavigation;	// 16 = 0x10
    _Bool _warrantySentinelExists;	// 17 = 0x11
    _Bool _didAgree;	// 18 = 0x12
    id <COSBuddyControllerDelegate> _delegate;	// 24 = 0x18
    NRTermsEvent *_onlineTerms;	// 32 = 0x20
    RUILoader *_loader;	// 40 = 0x28
    RUIPage *_loadingPage;	// 48 = 0x30
    NSMutableArray *_objectModels;	// 56 = 0x38
    UIViewController *_viewController;	// 64 = 0x40
    NRTermsEvent *_offlineLicense;	// 72 = 0x48
    NRTermsEvent *_offlineMultiterms;	// 80 = 0x50
    NRTermsEvent *_offlineWarranty;	// 88 = 0x58
    BuddySimpleTCController *_offlineLicenseVC;	// 96 = 0x60
    BuddySimpleTCController *_offlineWarrantyVC;	// 104 = 0x68
    CDUnknownBlockType _linkPressLoadCompletion;	// 112 = 0x70
}

+ (_Bool)skipControllerForExpressMode:(id)arg1;	// IMP=0x0020000000122570
+ (_Bool)controllerNeedsToRun;	// IMP=0x0010000000122568
- (void).cxx_destruct;	// IMP=0x00200000001243ba
@property(copy, nonatomic) CDUnknownBlockType linkPressLoadCompletion; // @synthesize linkPressLoadCompletion=_linkPressLoadCompletion;
@property(retain, nonatomic) BuddySimpleTCController *offlineWarrantyVC; // @synthesize offlineWarrantyVC=_offlineWarrantyVC;
@property(retain, nonatomic) BuddySimpleTCController *offlineLicenseVC; // @synthesize offlineLicenseVC=_offlineLicenseVC;
@property(retain, nonatomic) NRTermsEvent *offlineWarranty; // @synthesize offlineWarranty=_offlineWarranty;
@property(retain, nonatomic) NRTermsEvent *offlineMultiterms; // @synthesize offlineMultiterms=_offlineMultiterms;
@property(retain, nonatomic) NRTermsEvent *offlineLicense; // @synthesize offlineLicense=_offlineLicense;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSMutableArray *objectModels; // @synthesize objectModels=_objectModels;
@property(retain, nonatomic) RUIPage *loadingPage; // @synthesize loadingPage=_loadingPage;
@property(retain, nonatomic) RUILoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) NRTermsEvent *onlineTerms; // @synthesize onlineTerms=_onlineTerms;
@property(nonatomic) _Bool didAgree; // @synthesize didAgree=_didAgree;
@property(nonatomic) _Bool warrantySentinelExists; // @synthesize warrantySentinelExists=_warrantySentinelExists;
@property(nonatomic) _Bool appearingFromBackNavigation; // @synthesize appearingFromBackNavigation=_appearingFromBackNavigation;
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)localizedWaitScreenDescription;	// IMP=0x00100000001241e5
- (double)waitScreenPushGracePeriod;	// IMP=0x00100000001241b5
- (_Bool)holdWithWaitScreen;	// IMP=0x00100000001241ad
- (void)_presentDisagreeConfirmationAlert;	// IMP=0x0010000000123e96
- (void)buddyTCSubController:(id)arg1 didFinishWithAgree:(_Bool)arg2;	// IMP=0x0010000000123c65
- (void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(_Bool)arg3;	// IMP=0x0010000000123c5f
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000123655
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;	// IMP=0x00100000001232ab
- (id)parentViewControllerForObjectModel:(id)arg1;	// IMP=0x0010000000123299
- (void)_popObjectModelAnimated:(_Bool)arg1;	// IMP=0x001000000012311a
- (void)_cleanupLoader;	// IMP=0x00100000001230d5
- (void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 forRequest:(id)arg3;	// IMP=0x0010000000122f20
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;	// IMP=0x0010000000122c5a
- (void)presentConfirmationAlertWithTitle:(id)arg1 message:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 termsEvent:(id)arg5;	// IMP=0x0010000000122a31
- (void)markTermsAsAcceptedWithTermsEvent:(id)arg1;	// IMP=0x00100000001227df
- (_Bool)holdBeforeDisplaying;	// IMP=0x0010000000122578
- (void)endPerformancePhases;	// IMP=0x001000000012244a
- (id)holdActivityIdentifier;	// IMP=0x001000000012243d
- (void)queryGizmoForShowWarrantySentinel;	// IMP=0x0010000000122338
- (void)enteredCompatibilityState:(id)arg1;	// IMP=0x00100000001221e2
- (id)_navigationController;	// IMP=0x00100000001221cc
- (void)retrieveOfflineTerms;	// IMP=0x00100000001220bd
- (void)_showTermsFromRequest:(id)arg1;	// IMP=0x0010000000121faa
- (void)handleOnlineTermsAndConditionsResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;	// IMP=0x00100000001217f3
- (void)requestOnlineTermsAndConditions;	// IMP=0x001000000012159d
- (id)offlineWarrantyController;	// IMP=0x00100000001214c6
- (id)offlineLicenseController;	// IMP=0x00100000001213ef
- (id)termsEventWithDocumentationID:(id)arg1 data:(id)arg2;	// IMP=0x00100000001212ce
- (void)offlineTermsResponse:(id)arg1;	// IMP=0x0010000000120ef0
- (void)warrantySentinelResponse:(id)arg1;	// IMP=0x0010000000120845
- (void)dealloc;	// IMP=0x00100000001207d0
- (id)init;	// IMP=0x00100000001207a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
