//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface CNFRegDisabledController
{
    PSSpecifier *_spinner;	// 288 = 0x120
    PSSpecifier *_turnOnButton;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x0000000000074e24
- (id)getAccountNameForSpecifier:(id)arg1;	// IMP=0x0000000000074c8a
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000074c44
- (void)_setupAccountHandlersForDisabledOperation;	// IMP=0x0000000000074724
- (void)turnOnTapped:(id)arg1;	// IMP=0x00000000000746ca
- (void)_deactivateSpinner;	// IMP=0x00000000000745eb
- (void)_activateSpinner;	// IMP=0x000000000007450c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000074499
- (id)_rightButtonItem;	// IMP=0x0000000000074491
- (id)specifierList;	// IMP=0x0000000000074027
- (id)bundle;	// IMP=0x000000000007401d

@end

