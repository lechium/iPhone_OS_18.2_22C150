//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AXSSKeyChord, FKACommandsView;

@interface FKACommandsViewController : UIViewController
{
    AXSSKeyChord *_textEditingModeExitKeyChord;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000005ffc
@property(retain, nonatomic) AXSSKeyChord *textEditingModeExitKeyChord; // @synthesize textEditingModeExitKeyChord=_textEditingModeExitKeyChord;
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000005fcf
@property(readonly, nonatomic) FKACommandsView *commandsView;
- (void)loadView;	// IMP=0x001000000000584b
- (_Bool)requiresNativeFocus;	// IMP=0x0010000000005843

@end
