//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIHostedMenuManager, _UIOEditMenuPresentationConfiguration, _UIOverlayService;

__attribute__((visibility("hidden")))
@interface _UIEditMenuOverlayUIClientPresentation
{
    _UIOEditMenuPresentationConfiguration *_presentationConfiguration;	// 8 = 0x8
    _UIOverlayService *_overlayService;	// 16 = 0x10
    _UIHostedMenuManager *_menuManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000018edb80
@property(readonly, nonatomic) _UIHostedMenuManager *menuManager; // @synthesize menuManager=_menuManager;
@property(readonly, nonatomic) _UIOverlayService *overlayService; // @synthesize overlayService=_overlayService;
@property(readonly, nonatomic) _UIOEditMenuPresentationConfiguration *presentationConfiguration; // @synthesize presentationConfiguration=_presentationConfiguration;
- (void)overlayServiceDidInvalidate:(id)arg1;	// IMP=0x00000000018edb39
- (void)_configureOverlayServiceIfNeeded;	// IMP=0x00000000018edac7
- (void)didTransitionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x00000000018ed908
- (void)preparedMenuWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000018ed6f6
- (void)performMenuLeafAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000018ed4e8
- (void)handleLifecycleEvent:(long long)arg1;	// IMP=0x00000000018ed4ce
- (void)hideMenuWithReason:(long long)arg1;	// IMP=0x00000000018ed3a6
- (void)replaceVisibleMenuWithMenu:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000018ed27a
- (void)sourceViewDidUpdateFromTraitCollection:(id)arg1;	// IMP=0x00000000018ed160
- (void)displayMenu:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000018ecc81
- (id)displayedMenu;	// IMP=0x00000000018ecc64
- (void)setDisplayedMenu:(id)arg1;	// IMP=0x00000000018ecbea
- (id)initWithDelegate:(id)arg1 sourceView:(id)arg2;	// IMP=0x00000000018ecb8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

