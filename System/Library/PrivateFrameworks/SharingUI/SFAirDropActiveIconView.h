//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImageView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SFAirDropActiveIconView : UIImageView
{
    UIView *_circleMaskView;	// 8 = 0x8
    _Bool _masked;	// 16 = 0x10
}

+ (id)baseImage;	// IMP=0x006000000002246b
- (void).cxx_destruct;	// IMP=0x0000000000022971
@property(nonatomic, getter=isMasked) _Bool masked; // @synthesize masked=_masked;
- (void)layoutSubviews;	// IMP=0x00000000000226e1
- (id)initWithFrame:(struct CGRect)arg1 grayscale:(_Bool)arg2;	// IMP=0x0000000000022596

@end
