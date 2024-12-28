//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COSHorizontalCheckmarkChoiceView;

@interface COSWristSelectionViewController
{
    COSHorizontalCheckmarkChoiceView *_choiceView;	// 8 = 0x8
}

+ (void)_madeWristSelectionForLeftWrist:(_Bool)arg1;	// IMP=0x002000000008d2a3
+ (void)resumePairingWithSavedValue:(id)arg1;	// IMP=0x001000000008c89e
+ (_Bool)controllerNeedsToRun;	// IMP=0x001000000008c81f
- (void).cxx_destruct;	// IMP=0x002000000008d5df
@property(retain, nonatomic) COSHorizontalCheckmarkChoiceView *choiceView; // @synthesize choiceView=_choiceView;
- (void)choiceView:(id)arg1 didSelectChoice:(unsigned long long)arg2;	// IMP=0x001000000008d5b4
- (void)_madeWristSelectionForLeftWrist:(_Bool)arg1;	// IMP=0x001000000008d209
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000008cfe8
- (id)suggestedButtonTitle;	// IMP=0x001000000008cf7c
- (id)imageResource;	// IMP=0x001000000008cf70
- (_Bool)wantsDefaultImageResource;	// IMP=0x001000000008cf68
- (id)detailString;	// IMP=0x001000000008ce9c
- (id)titleString;	// IMP=0x001000000008ce30
- (void)viewDidLoad;	// IMP=0x001000000008c8da
- (_Bool)requiresActivationCheck;	// IMP=0x001000000008c8d2
- (id)init;	// IMP=0x001000000008c7ce

@end
