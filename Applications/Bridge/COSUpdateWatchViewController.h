//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface COSUpdateWatchViewController
{
    _Bool _isSkippable;	// 8 = 0x8
}

@property(nonatomic) _Bool isSkippable; // @synthesize isSkippable=_isSkippable;
- (void)_showInternalOnlySkipButton;	// IMP=0x001000000005ed13
- (void)_skipUpdateAndContinue;	// IMP=0x001000000005eb76
- (void)abortPairing;	// IMP=0x001000000005e880
- (void)learnMoreButtonPressed:(id)arg1;	// IMP=0x001000000005e87a
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x001000000005e72f
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000005e62a
- (id)imageResource;	// IMP=0x001000000005e61e
- (_Bool)wantsLightenBlendedScreen;	// IMP=0x001000000005e616
- (id)learnMoreButtonTitle;	// IMP=0x001000000005e5aa
- (id)alternateButtonTitle;	// IMP=0x001000000005e51c
- (id)suggestedButtonTitle;	// IMP=0x001000000005e4b0
- (id)detailString;	// IMP=0x001000000005e444
- (id)titleString;	// IMP=0x001000000005e3d8
- (_Bool)requiresActivationCheck;	// IMP=0x001000000005e3d0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000005e392
- (id)init;	// IMP=0x001000000005e341

@end

