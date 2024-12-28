//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSObject, NSString;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STContentPrivacyAllowedAppsDetailController : PSListController
{
    NSObject<STRootViewModelCoordinator> *_coordinator;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000000447b3
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;	// IMP=0x0000000000044790
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;	// IMP=0x000000000004477e
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;	// IMP=0x000000000004476c
- (void)didAcceptRemovePIN;	// IMP=0x000000000004475a
- (void)didCancelEnteringPIN;	// IMP=0x000000000004472c
- (void)didAcceptEnteredPIN:(id)arg1;	// IMP=0x000000000004471a
- (_Bool)validatePIN:(id)arg1 forPINController:(id)arg2;	// IMP=0x0000000000044708
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000004461a
- (void)dealloc;	// IMP=0x00000000000444a6
- (void)_addBlacklistAppSpecifier:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000004436c
- (void)_addBooleanAppSpecifier:(id)arg1 configuration:(id)arg2 key:(id)arg3 bundleID:(id)arg4;	// IMP=0x000000000004421a
- (id)nameForInstalledSystemApp:(id)arg1;	// IMP=0x00000000000440ed
- (id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2 fallbackLabel:(id)arg3;	// IMP=0x0000000000043e14
- (id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2 fallbackLabel:(id)arg3 icon:(id)arg4;	// IMP=0x0000000000043d89
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000436c6
- (id)getItemSpecifierValue:(id)arg1;	// IMP=0x00000000000434ec
- (id)specifiers;	// IMP=0x0000000000042ed9
- (id)init;	// IMP=0x0000000000042df8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
