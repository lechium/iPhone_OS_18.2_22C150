//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIHorizontalLockupView, SKUIImageView;

__attribute__((visibility("hidden")))
@interface SKUIBackgroundImageWrapperForHorizontalLockup
{
    SKUIHorizontalLockupView *_lockup;	// 8 = 0x8
    SKUIImageView *_imageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000016c940
@property(nonatomic) __weak SKUIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak SKUIHorizontalLockupView *lockup; // @synthesize lockup=_lockup;
- (void)setImage:(id)arg1;	// IMP=0x000000000016c6f2
- (id)initWithImage:(id)arg1;	// IMP=0x000000000016c648

@end
