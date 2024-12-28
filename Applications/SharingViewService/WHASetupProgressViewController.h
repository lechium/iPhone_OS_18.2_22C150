//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface WHASetupProgressViewController
{
    UIImageView *_imageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UIView *_progressView;	// 48 = 0x30
    UIActivityIndicatorView *_progressSpinner;	// 56 = 0x38
    UILabel *_progressLabel;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000012820a
- (void)handleProgressEvent:(unsigned int)arg1;	// IMP=0x0010000000128172
- (void)handleDismissButton:(id)arg1;	// IMP=0x00100000001280ea
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000128068
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000127edb

@end
