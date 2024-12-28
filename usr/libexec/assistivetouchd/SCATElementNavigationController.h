//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXElement, NSIndexPath, NSString, NSValue, SCATFocusContext, SCATMenuOpeningAuxiliaryElementManager, SCATVisualScrollersAuxiliaryElementManager;
@protocol HNDAccessibilityManagerProtocol, SCATElementNavigationControllerDelegate;

@interface SCATElementNavigationController
{
    _Bool _shouldRescanAfterFetch;	// 8 = 0x8
    _Bool _shouldRescanFromTopAfterFetch;	// 9 = 0x9
    _Bool _shouldScanKeyboardOnAppearance;	// 10 = 0xa
    _Bool _menuOpeningElementEnabled;	// 11 = 0xb
    _Bool _topLevelVisualScrollersEnabled;	// 12 = 0xc
    _Bool _groupVisualScrollersEnabled;	// 13 = 0xd
    int _keyboardSelectBehavior;	// 16 = 0x10
    id <HNDAccessibilityManagerProtocol> _axManager;	// 24 = 0x18
    id <SCATElementNavigationControllerDelegate> _delegate;	// 32 = 0x20
    SCATFocusContext *_currentFocusContext;	// 40 = 0x28
    NSValue *_keyboardKeyCenterPoint;	// 48 = 0x30
    NSIndexPath *_keyboardIndexPath;	// 56 = 0x38
    AXElement *_lastScannedElementCommunity;	// 64 = 0x40
    NSString *_startingSceneIdentifier;	// 72 = 0x48
    AXElement *_firstResponder;	// 80 = 0x50
    SCATMenuOpeningAuxiliaryElementManager *_menuOpeningAuxElementManager;	// 88 = 0x58
    SCATVisualScrollersAuxiliaryElementManager *_topLevelVisualScrollersAuxElementManager;	// 96 = 0x60
    SCATVisualScrollersAuxiliaryElementManager *_groupVisualScrollersAuxElementManager;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000a102e
@property(nonatomic, getter=areGroupVisualScrollersEnabled) _Bool groupVisualScrollersEnabled; // @synthesize groupVisualScrollersEnabled=_groupVisualScrollersEnabled;
@property(retain, nonatomic) SCATVisualScrollersAuxiliaryElementManager *groupVisualScrollersAuxElementManager; // @synthesize groupVisualScrollersAuxElementManager=_groupVisualScrollersAuxElementManager;
@property(nonatomic, getter=areTopLevelVisualScrollersEnabled) _Bool topLevelVisualScrollersEnabled; // @synthesize topLevelVisualScrollersEnabled=_topLevelVisualScrollersEnabled;
@property(retain, nonatomic) SCATVisualScrollersAuxiliaryElementManager *topLevelVisualScrollersAuxElementManager; // @synthesize topLevelVisualScrollersAuxElementManager=_topLevelVisualScrollersAuxElementManager;
@property(nonatomic, getter=isMenuOpeningElementEnabled) _Bool menuOpeningElementEnabled; // @synthesize menuOpeningElementEnabled=_menuOpeningElementEnabled;
@property(retain, nonatomic) SCATMenuOpeningAuxiliaryElementManager *menuOpeningAuxElementManager; // @synthesize menuOpeningAuxElementManager=_menuOpeningAuxElementManager;
@property(nonatomic) _Bool shouldScanKeyboardOnAppearance; // @synthesize shouldScanKeyboardOnAppearance=_shouldScanKeyboardOnAppearance;
@property(retain, nonatomic) AXElement *firstResponder; // @synthesize firstResponder=_firstResponder;
@property(retain, nonatomic) NSString *startingSceneIdentifier; // @synthesize startingSceneIdentifier=_startingSceneIdentifier;
@property(retain, nonatomic) AXElement *lastScannedElementCommunity; // @synthesize lastScannedElementCommunity=_lastScannedElementCommunity;
@property(nonatomic) int keyboardSelectBehavior; // @synthesize keyboardSelectBehavior=_keyboardSelectBehavior;
@property(retain, nonatomic) NSIndexPath *keyboardIndexPath; // @synthesize keyboardIndexPath=_keyboardIndexPath;
@property(retain, nonatomic) NSValue *keyboardKeyCenterPoint; // @synthesize keyboardKeyCenterPoint=_keyboardKeyCenterPoint;
@property(nonatomic) _Bool shouldRescanFromTopAfterFetch; // @synthesize shouldRescanFromTopAfterFetch=_shouldRescanFromTopAfterFetch;
@property(nonatomic) _Bool shouldRescanAfterFetch; // @synthesize shouldRescanAfterFetch=_shouldRescanAfterFetch;
@property(retain, nonatomic) SCATFocusContext *currentFocusContext; // @synthesize currentFocusContext=_currentFocusContext;
@property(nonatomic) __weak id <SCATElementNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)focusContextAfterDrillOutOnGroup:(id)arg1;	// IMP=0x00100000000a0d20
- (id)nextFocusContextAfterActivatingKeyboardElement:(id)arg1;	// IMP=0x00100000000a0aa0
- (id)nextFocusContextAfterDismissingMenuForElement:(id)arg1;	// IMP=0x00100000000a0741
- (void)scannerManager:(id)arg1 didActivateElement:(id)arg2;	// IMP=0x00100000000a03ac
- (id)_replacementForLastFocusedKeyboardItem;	// IMP=0x00100000000a01e3
- (void)_trackLastFocusedKeyboardItem:(id)arg1;	// IMP=0x001000000009fddb
- (id)_keyboardElementForIndexPath:(id)arg1;	// IMP=0x001000000009fc5d
- (id)_indexPathForKeyboardElement:(id)arg1;	// IMP=0x001000000009fb38
- (_Bool)_didFocusLastOnKeyboardElement;	// IMP=0x001000000009fa82
- (_Bool)_isScanningKeyboardContainer:(id)arg1;	// IMP=0x001000000009f9f0
- (_Bool)_isKeyboardContainerElement:(id)arg1 allowKeyboardContainerItself:(_Bool)arg2;	// IMP=0x001000000009f932
- (id)_firstKeyboardFocusContext;	// IMP=0x001000000009f89a
- (void)didFetchElements:(id)arg1 foundNewElements:(_Bool)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(_Bool)arg4;	// IMP=0x001000000009f0f9
- (void)scannerManager:(id)arg1 nativeFocusElementDidChange:(id)arg2;	// IMP=0x001000000009f0e7
- (_Bool)_deferFocusToNativeFocusElementIfNeeded:(id)arg1;	// IMP=0x001000000009f0df
- (_Bool)_shouldTrackNativeFocusElement;	// IMP=0x001000000009f066
- (void)_attemptToRestoreFocusContext:(id)arg1 scannerManager:(id)arg2 foundNewElements:(_Bool)arg3;	// IMP=0x001000000009e36b
- (unsigned long long)_depthForElement:(id)arg1;	// IMP=0x001000000009e2ac
- (void)scannerWillMakeManagerInactive:(id)arg1 activeElementManager:(id)arg2;	// IMP=0x001000000009e10c
- (void)driver:(id)arg1 willUnfocusFromContext:(id)arg2;	// IMP=0x001000000009e076
- (void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3;	// IMP=0x001000000009de09
- (void)_updateMenuOpeningElementEnabledWithFocusContext:(id)arg1;	// IMP=0x001000000009db2d
- (void)_updateVisualScrollersWithFocusContext:(id)arg1 oldContext:(id)arg2;	// IMP=0x001000000009d88e
- (void)firstResponderDidChange:(id)arg1;	// IMP=0x001000000009d2ee
- (void)_trackLastScannedElementCommunityFromFocusContext:(id)arg1;	// IMP=0x001000000009d19f
- (void)screenChangingButtonWasPressed:(id)arg1;	// IMP=0x001000000009d01e
- (void)alertDidAppear:(id)arg1;	// IMP=0x001000000009ce8c
- (void)screenWillChange:(id)arg1;	// IMP=0x001000000009ce7a
- (void)screenDidChange:(id)arg1 data:(id)arg2;	// IMP=0x001000000009cb74
- (void)appTransitionDidOccur:(id)arg1;	// IMP=0x001000000009c9e2
- (void)orientationDidChange:(id)arg1;	// IMP=0x001000000009c861
- (void)_resetFetchFlags;	// IMP=0x001000000009c6d0
- (void)_pauseScanningForLikelyScreenChange;	// IMP=0x001000000009c533
- (void)_pauseScanningTemporarily;	// IMP=0x001000000009c224
- (void)_startWaitingForFetchAfterTemporaryPause;	// IMP=0x001000000009c201
- (void)_stopWaitingForFetchAfterTemporaryPause;	// IMP=0x001000000009c1db
- (void)_giveUpWaitingForFetchAfterPause;	// IMP=0x001000000009bd87
- (id)numberOfItemsInCurrentScanCycle;	// IMP=0x001000000009bb20
- (id)_nativeFocusElementContext;	// IMP=0x001000000009ba81
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x001000000009b80b
- (id);	// IMP=0x001000000009b595
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x001000000009b515
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x001000000009b3cd
- (void)_menuOpeningElementActivated:(id)arg1;	// IMP=0x001000000009b062
- (id)identifier;	// IMP=0x001000000009b04e
@property(retain, nonatomic) id <HNDAccessibilityManagerProtocol> axManager; // @synthesize axManager=_axManager;
@property(readonly, nonatomic) _Bool isGroupingEnabled;
- (id)init;	// IMP=0x001000000009af4a

@end
