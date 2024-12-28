//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIButton;

@interface DOCItemInfoOpenButton
{
    UIButton *_openButton;	// 56 = 0x38
    UIButton *_downloadButton;	// 64 = 0x40
    NSLayoutConstraint *_progressViewHeightConstraint;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000005896
@property(nonatomic) __weak NSLayoutConstraint *progressViewHeightConstraint; // @synthesize progressViewHeightConstraint=_progressViewHeightConstraint;
@property(nonatomic) __weak UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(nonatomic) __weak UIButton *openButton; // @synthesize openButton=_openButton;
- (void)updateProgressViewSizeConstraints;	// IMP=0x001000000000569c
- (void)updateForChangedContentSizeCategory;	// IMP=0x0010000000005644
- (void)userDidTapOpenButton;	// IMP=0x0010000000005446
- (void)updateForState;	// IMP=0x0010000000005261
- (void)setNodeCanBeOpened:(_Bool)arg1;	// IMP=0x00100000000051df
- (void)setNode:(id)arg1;	// IMP=0x001000000000515d
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000005086
- (void)commonInit;	// IMP=0x00100000000047c4

@end
