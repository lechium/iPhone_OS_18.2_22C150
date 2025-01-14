//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PSRootController, PSSpecifier, UIViewController;
@protocol PSController;

__attribute__((visibility("hidden")))
@interface CKBlackholeConversationListViewController
{
    UIViewController<PSController> *_parentController;	// 8 = 0x8
    PSRootController *_rootController;	// 16 = 0x10
    PSSpecifier *_specifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000035fc6b
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x000000000035fc63
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000035fc46
- (void)handleURL:(id)arg1;	// IMP=0x000000000035fc29
- (void)showController:(id)arg1 animate:(_Bool)arg2;	// IMP=0x000000000035fc0c
- (void)showController:(id)arg1;	// IMP=0x000000000035fbef
- (id)readPreferenceValue:(id)arg1;	// IMP=0x000000000035fbd6
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x000000000035fbbd
- (id)specifier;	// IMP=0x000000000035fba8
- (void)setSpecifier:(id)arg1;	// IMP=0x000000000035fb5e
- (id)rootController;	// IMP=0x000000000035fb49
- (void)setRootController:(id)arg1;	// IMP=0x000000000035fb35
- (id)parentController;	// IMP=0x000000000035fb20
- (void)setParentController:(id)arg1;	// IMP=0x000000000035fb0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

