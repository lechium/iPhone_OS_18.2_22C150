//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SiriSetup31VoiceSelectionWelcomeController : OBTableWelcomeController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *orbView;	// 24 = 0x18
    MISSING_TYPE *currentVoiceSelection;	// 32 = 0x20
    MISSING_TYPE *voiceOptionsView;	// 40 = 0x28
    MISSING_TYPE *voiceSelectionPresenter;	// 48 = 0x30
    MISSING_TYPE *continueButton;	// 56 = 0x38
    MISSING_TYPE *primaryButton;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000ed20
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;	// IMP=0x000000000000ecd0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(_Bool)arg4;	// IMP=0x000000000000eca0
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;	// IMP=0x000000000000ec70
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;	// IMP=0x000000000000ec40
- (void)chooseForMeTapped;	// IMP=0x000000000000eb70
- (void)continueTapped;	// IMP=0x000000000000eb40
- (void)presenter:(id)arg1 didChangeVoiceSelection:(id)arg2;	// IMP=0x000000000000edc0

@end

