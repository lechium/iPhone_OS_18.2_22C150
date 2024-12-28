//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UILabel;

@interface COSUnlockPlaceholderViewController
{
    UIButton *_acceptButton;	// 8 = 0x8
    UIButton *_declineButton;	// 16 = 0x10
    UILabel *_footerLabel;	// 24 = 0x18
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x004000000003a2f8
+ (_Bool)isMandatory;	// IMP=0x001000000003a1a1
- (void).cxx_destruct;	// IMP=0x002000000003a9a3
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
- (void)okayButtonPressed:(id)arg1;	// IMP=0x001000000003a8d9
- (id)detailTitleString;	// IMP=0x001000000003a86d
- (id)okayButtonTitle;	// IMP=0x001000000003a801
- (void)unlockPairingComplete:(id)arg1;	// IMP=0x001000000003a7b5
- (id)imageResource;	// IMP=0x001000000003a707
- (id)detailString;	// IMP=0x001000000003a671
- (id)titleString;	// IMP=0x001000000003a605
- (id)init;	// IMP=0x001000000003a4e7
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x001000000003a4df

@end
