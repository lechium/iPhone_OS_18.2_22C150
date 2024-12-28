//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSListController.h>

@class NSString;

@interface COSFocusSettingsController : BPSListController
{
}

- (void)gatewayManagerDidUpdateFocusPairSyncValue;	// IMP=0x002000000008e9a0
- (void)setPairSyncState:(id)arg1 specifier:(id)arg2;	// IMP=0x001000000008e861
- (id)pairSyncState:(id)arg1;	// IMP=0x001000000008e7ea
- (void)viewDidLoad;	// IMP=0x001000000008e775
- (void)_updateFooterTextForSettingsGroupSpecifier:(id)arg1 syncEnabled:(_Bool)arg2;	// IMP=0x001000000008e6ab
- (id)specifiers;	// IMP=0x001000000008e461

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
