//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSMapTable, VideosExtrasBackgroundViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasElementViewController : UIViewController
{
    VideosExtrasBackgroundViewController *_backgroundViewController;	// 8 = 0x8
    NSMapTable *_bannerButtonMap;	// 16 = 0x10
    _Bool _wide;	// 24 = 0x18
}

+ (id)_borderView;	// IMP=0x006000000023a23b
- (void).cxx_destruct;	// IMP=0x000000000023aeac
@property(nonatomic, getter=isWide) _Bool wide; // @synthesize wide=_wide;
- (void)_didActivateButtonWithItem:(id)arg1;	// IMP=0x000000000023ae24
- (void)_prepareLayout;	// IMP=0x000000000023ae1e
- (id)_installBackdrop:(id)arg1;	// IMP=0x000000000023a9df
- (void)_configureBannerWithElement:(id)arg1;	// IMP=0x000000000023a4d7
- (void)configureBackgroundWithElements:(id)arg1;	// IMP=0x000000000023a35f
- (void)_startBackgroundAudio;	// IMP=0x000000000023a359
- (id)backgroundViewController;	// IMP=0x000000000023a226
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x000000000023a214
- (unsigned long long)extrasSize;	// IMP=0x000000000023a13c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000023a0fb
- (void)dealloc;	// IMP=0x000000000023a0cc
- (id)init;	// IMP=0x000000000023a040

@end
