//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, PinView, _UIBackdropView;

@interface PinViewController
{
    NSNumber *_pinLength;	// 8 = 0x8
    PinView *_pinView;	// 16 = 0x10
    _UIBackdropView *_blurView;	// 24 = 0x18
    long long _currentInterfaceStyle;	// 32 = 0x20
    _Bool _ctkPin;	// 40 = 0x28
    NSNumber *_pinMaxLength;	// 48 = 0x30
    NSNumber *_pinMinLength;	// 56 = 0x38
    NSNumber *_pinCharset;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000017b85
@property(readonly, nonatomic) _Bool ctkPin; // @synthesize ctkPin=_ctkPin;
@property(readonly, nonatomic) NSNumber *pinCharset; // @synthesize pinCharset=_pinCharset;
@property(readonly, nonatomic) NSNumber *pinMinLength; // @synthesize pinMinLength=_pinMinLength;
@property(readonly, nonatomic) NSNumber *pinMaxLength; // @synthesize pinMaxLength=_pinMaxLength;
- (void)pinCancelled;	// IMP=0x0010000000017b30
- (void)pinEntered:(id)arg1;	// IMP=0x0010000000017a15
- (void)didReceiveAuthenticationData;	// IMP=0x00100000000176eb
- (void)_updateCurrentAppearanceIfNeeded;	// IMP=0x001000000001760a
- (void)viewDidLayoutSubviews;	// IMP=0x00100000000175c9
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000017580
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000017537
- (long long)_backdropStyle;	// IMP=0x00100000000174d9
- (id)_createBlurView;	// IMP=0x0010000000017412
- (void)loadView;	// IMP=0x001000000001713a

@end

