//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKeyboardDictationMenu
{
}

+ (id)activeInstance;	// IMP=0x0080000000e084a0
+ (id)sharedInstance;	// IMP=0x0080000000e08434
- (_Bool)usesDimmingView;	// IMP=0x0000000000e08b6b
- (void)hide;	// IMP=0x0000000000e08b2d
- (void)fadeWithDelay:(double)arg1;	// IMP=0x0000000000e08ae5
- (void)fade;	// IMP=0x0000000000e08aa7
- (void)cleanupForFadeOrHide;	// IMP=0x0000000000e089d7
- (void)willShow;	// IMP=0x0000000000e08934
- (void)performShowAnimation;	// IMP=0x0000000000e084da
- (_Bool)centerPopUpOverKey;	// IMP=0x0000000000e084d2
- (_Bool)usesTable;	// IMP=0x0000000000e084ca
- (struct CGSize)preferredSize;	// IMP=0x0000000000e084b1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000e082b1

@end

