//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARSettingsCellSpecifier, CARSettingsSwitchCellSpecifier, CRSSiriPreferences, NSString;

@interface CARSiriPanel
{
    _Bool _appleIntelligenceEnabled;	// 8 = 0x8
    _Bool _autoSendMessagesSpecifierVisible;	// 9 = 0x9
    CARSettingsCellSpecifier *_cellSpecifier;	// 16 = 0x10
    CARSettingsSwitchCellSpecifier *_autoSendMessagesSpecifier;	// 24 = 0x18
    CARSettingsSwitchCellSpecifier *_showAppsBehindSiriSpecifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001b0c9
@property(readonly, nonatomic) _Bool autoSendMessagesSpecifierVisible; // @synthesize autoSendMessagesSpecifierVisible=_autoSendMessagesSpecifierVisible;
@property(nonatomic) _Bool appleIntelligenceEnabled; // @synthesize appleIntelligenceEnabled=_appleIntelligenceEnabled;
- (void)preferences:(id)arg1 showAppsBehindSiriInCarPlayEnabledChanged:(_Bool)arg2;	// IMP=0x001000000001b038
- (void)preferences:(id)arg1 autoSendInHeadphonesEnabledChanged:(_Bool)arg2;	// IMP=0x001000000001afd7
- (void)preferences:(id)arg1 mainAutoSendEnabledChanged:(_Bool)arg2;	// IMP=0x001000000001af76
- (void)preferences:(id)arg1 autoSendInCarPlayEnabledChanged:(_Bool)arg2;	// IMP=0x001000000001af15
- (void)preferences:(id)arg1 announceNotificationsInCarPlayTemporarilyDisabledChanged:(_Bool)arg2;	// IMP=0x001000000001af0f
- (void)preferences:(id)arg1 carPlayAnnounceEnablementTypeChanged:(long long)arg2;	// IMP=0x001000000001af09
- (void)invalidate;	// IMP=0x001000000001aec8
@property(readonly, nonatomic) CARSettingsSwitchCellSpecifier *showAppsBehindSiriSpecifier; // @synthesize showAppsBehindSiriSpecifier=_showAppsBehindSiriSpecifier;
- (void)setAutoSendMessagesSpecifierVisible:(_Bool)arg1;	// IMP=0x001000000001ad55
@property(readonly, nonatomic) CARSettingsSwitchCellSpecifier *autoSendMessagesSpecifier; // @synthesize autoSendMessagesSpecifier=_autoSendMessagesSpecifier;
@property(readonly, nonatomic) CRSSiriPreferences *siriPreferences;
- (id)cellSpecifier;	// IMP=0x001000000001a876
- (id)specifierSections;	// IMP=0x001000000001a460
- (id)initWithPanelController:(id)arg1;	// IMP=0x001000000001a3e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
