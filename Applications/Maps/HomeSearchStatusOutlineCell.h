//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HomeSearchStatusOutlineCellModel, NSLayoutConstraint, UIActivityIndicatorView, UIButton, UILabel, UIStackView;

@interface HomeSearchStatusOutlineCell
{
    UILabel *_errorLabel;	// 8 = 0x8
    UIActivityIndicatorView *_loadingIndicator;	// 16 = 0x10
    UIButton *_rapButton;	// 24 = 0x18
    NSLayoutConstraint *_bottomAnchorContraint;	// 32 = 0x20
    UIStackView *_stackView;	// 40 = 0x28
    HomeSearchStatusOutlineCellModel *_cellModel;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000294f78
@property(retain, nonatomic) HomeSearchStatusOutlineCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void)prepareForReuse;	// IMP=0x0010000000294f1e
- (void)_didTapOnRAPButton;	// IMP=0x0010000000294ed6
- (void)_removeRAPButton;	// IMP=0x0010000000294e88
- (void)_addRAPButton;	// IMP=0x0010000000294e5d
- (void)_updateFromModel;	// IMP=0x0010000000294c1b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000029424a

@end

