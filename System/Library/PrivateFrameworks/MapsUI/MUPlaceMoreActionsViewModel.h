//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUActionRowItemViewModel.h"

@class NSArray, UIMenuElement;
@protocol MUHeaderButtonMenuActionProvider;

__attribute__((visibility("hidden")))
@interface MUPlaceMoreActionsViewModel : MUActionRowItemViewModel
{
    id <MUHeaderButtonMenuActionProvider> _menuProvider;	// 8 = 0x8
    NSArray *_externalActionMenuHelpers;	// 16 = 0x10
    UIMenuElement *_menuElement;	// 24 = 0x18
    NSArray *_promotedSystemActionTypes;	// 32 = 0x20
    NSArray *_excludedSystemActionTypes;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001025b7
- (id)_allExternalActionMenuRevealButtons;	// IMP=0x0000000000102261
@property(readonly, nonatomic) NSArray *externalActionMenuRevealButtons;
- (id)analyticsButtonValues;	// IMP=0x0000000000102038
- (id)accessibilityIdentifier;	// IMP=0x0000000000102015
- (_Bool)isEnabled;	// IMP=0x000000000010200d
- (id)buildMenuWithPresentationOptions:(id)arg1;	// IMP=0x0000000000101ae3
- (id)initWithGroupedExternalActions:(id)arg1 promotedSystemActionTypes:(id)arg2 excludedSystemActionTypes:(id)arg3 menuActionProvider:(id)arg4 amsResultProvider:(id)arg5 iconCache:(id)arg6 externalActionHandler:(id)arg7 analyticsHandler:(id)arg8;	// IMP=0x000000000010166f
- (id)titleText;	// IMP=0x000000000010165e
- (id)symbolName;	// IMP=0x0000000000101651

@end
