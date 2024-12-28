//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MUWebMenuButton, MUWebUIMenuActionManager;

__attribute__((visibility("hidden")))
@interface MUWebUIMenu : UIControl
{
    MUWebMenuButton *_menuButton;	// 8 = 0x8
    MUWebUIMenuActionManager *_menuActionManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f6eeb
@property(retain, nonatomic) MUWebUIMenuActionManager *menuActionManager; // @synthesize menuActionManager=_menuActionManager;
@property(retain, nonatomic) MUWebMenuButton *menuButton; // @synthesize menuButton=_menuButton;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000000f697b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f6872

@end
