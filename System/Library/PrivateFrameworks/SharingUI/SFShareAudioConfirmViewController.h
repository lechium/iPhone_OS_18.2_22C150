//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTMaterialView, SFMediaPlayerView, UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface SFShareAudioConfirmViewController
{
    MTMaterialView *_confirmButtonMaterialView;	// 40 = 0x28
    unsigned int _colorCode;	// 48 = 0x30
    unsigned int _productID;	// 52 = 0x34
    UIImageView *_productImageView;	// 56 = 0x38
    SFMediaPlayerView *_productMovieView;	// 64 = 0x40
    UIButton *_confirmButton;	// 72 = 0x48
    UIButton *_cancelButton;	// 80 = 0x50
    UIImageView *_shareImageView;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000036dcb
@property(nonatomic) unsigned int productID; // @synthesize productID=_productID;
@property(nonatomic) unsigned int colorCode; // @synthesize colorCode=_colorCode;
@property(retain, nonatomic) UIImageView *shareImageView; // @synthesize shareImageView=_shareImageView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) SFMediaPlayerView *productMovieView; // @synthesize productMovieView=_productMovieView;
@property(retain, nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
- (void)_updateDeviceVisual:(id)arg1;	// IMP=0x0000000000036a3c
- (void)eventCancel:(id)arg1;	// IMP=0x00000000000369b9
- (void)eventConfirm:(id)arg1;	// IMP=0x0000000000036905
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000368bc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000003683a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000363f4

@end

