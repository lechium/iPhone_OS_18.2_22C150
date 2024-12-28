//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrivacySettingsUI/PUIPhotosPrivacyController.h>

@class NSObject, NSString, PSSpecifier;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STAllowPhotoRestrictionsController : PUIPhotosPrivacyController
{
    PSSpecifier *_allowedGroup;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000001f24a
- (void)devicePINControllerDidDismissPINPane:(id)arg1;	// IMP=0x000000000001f238
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;	// IMP=0x000000000001f226
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;	// IMP=0x000000000001f214
- (void)didAcceptRemovePIN;	// IMP=0x000000000001f202
- (void)didCancelEnteringPIN;	// IMP=0x000000000001f1f0
- (void)didAcceptEnteredPIN:(id)arg1;	// IMP=0x000000000001f1de
- (_Bool)validatePIN:(id)arg1 forPINController:(id)arg2;	// IMP=0x000000000001f1cc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000001eb9f
- (id)specifiers;	// IMP=0x000000000001e7ac
@property(readonly) NSObject<STRootViewModelCoordinator> *coordinator;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<STRootViewModelCoordinator>",?,R


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
