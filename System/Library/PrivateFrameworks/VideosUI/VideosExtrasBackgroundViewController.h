//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class IKImageElement, MPUArtworkView, NSArray, NSTimer, UIImageView;

__attribute__((visibility("hidden")))
@interface VideosExtrasBackgroundViewController : UIViewController
{
    NSArray *_backgroundElements;	// 8 = 0x8
    IKImageElement *_displayedImageElement;	// 16 = 0x10
    NSArray *_imageConstraints;	// 24 = 0x18
    MPUArtworkView *_imageView;	// 32 = 0x20
    NSTimer *_updateTimer;	// 40 = 0x28
    UIImageView *_vignetteView;	// 48 = 0x30
    unsigned long long _vignetteType;	// 56 = 0x38
}

+ (id)vignetteImageForType:(unsigned long long)arg1;	// IMP=0x00600000001351b7
- (void).cxx_destruct;	// IMP=0x000000000013521f
@property(nonatomic) unsigned long long vignetteType; // @synthesize vignetteType=_vignetteType;
@property(readonly, nonatomic) NSArray *backgroundElements; // @synthesize backgroundElements=_backgroundElements;
- (void)_initVignette;	// IMP=0x0000000000134fdd
- (void)_invalidateTimer;	// IMP=0x0000000000134fa5
- (void)_scheduleTimerIfNeeded;	// IMP=0x0000000000134d32
- (void)_didReceiveImage:(id)arg1;	// IMP=0x0000000000134b60
- (void)_updateImage;	// IMP=0x000000000013467e
- (void)_updateConstraintsForImageSize:(struct CGSize)arg1 position:(unsigned long long)arg2;	// IMP=0x00000000001344d5
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000134477
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000134436
- (void)viewDidLoad;	// IMP=0x00000000001342b3
- (void)dealloc;	// IMP=0x0000000000134275
- (id)initWithBackgroundElements:(id)arg1;	// IMP=0x0000000000134207
- (id)initWithBackgroundElement:(id)arg1;	// IMP=0x000000000013414d

@end
