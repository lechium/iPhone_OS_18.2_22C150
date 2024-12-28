//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STStopSharingScreenTimeGroupSpecifierProvider
{
    PSSpecifier *_stopSharingScreenTimeSpecifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ae683
@property(retain, nonatomic) PSSpecifier *stopSharingScreenTimeSpecifier; // @synthesize stopSharingScreenTimeSpecifier=_stopSharingScreenTimeSpecifier;
- (void)disableScreenTime:(id)arg1;	// IMP=0x00000000000ae5d2
- (void)disableManagement:(id)arg1;	// IMP=0x00000000000ae546
- (id)stopSharingScreenTimeFooterText;	// IMP=0x00000000000ae2e9
- (id)stopSharingScreenTimeButtonName;	// IMP=0x00000000000ae08c
- (void)updateStopSharingScreenTimeSpecifier;	// IMP=0x00000000000addb9
- (id)stopSharingScreenTimeConfirmationPrompt;	// IMP=0x00000000000adb59
- (void)confirmStopSharingScreenTime:(id)arg1;	// IMP=0x00000000000ad6ca
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000000000ad5d0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000ad39f
- (void)setCoordinator:(id)arg1;	// IMP=0x00000000000ad264
- (void)dealloc;	// IMP=0x00000000000ad1d1
- (id)init;	// IMP=0x00000000000acf7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
