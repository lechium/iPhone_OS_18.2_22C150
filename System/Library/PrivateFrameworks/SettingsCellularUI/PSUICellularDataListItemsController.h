//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListItemsController.h>

@class RadiosPreferences;

__attribute__((visibility("hidden")))
@interface PSUICellularDataListItemsController : PSListItemsController
{
    RadiosPreferences *_radioPreferences;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x000000000007510e
@property(retain, nonatomic) RadiosPreferences *radioPreferences; // @synthesize radioPreferences=_radioPreferences;
- (id)getLogger;	// IMP=0x00000000000750c9
- (void)setSpecifier:(id)arg1;	// IMP=0x000000000007504e
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000074fa6
- (_Bool)_isDataSwitchAutomatic:(id)arg1;	// IMP=0x0000000000074f3f
- (id)specifiers;	// IMP=0x0000000000074804
- (void)reloadCache;	// IMP=0x000000000007470e
- (void)airplaneModeChanged;	// IMP=0x000000000007450e
- (void)dealloc;	// IMP=0x0000000000074499
- (id)init;	// IMP=0x000000000007436c

@end

