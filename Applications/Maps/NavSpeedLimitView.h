//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIImageView;

@interface NavSpeedLimitView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    struct CGSize _intrinsicContentSize;	// 16 = 0x10
    unsigned long long _speedLimit;	// 32 = 0x20
    unsigned long long _units;	// 40 = 0x28
    long long _shieldType;	// 48 = 0x30
    _Bool _useNightMode;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000831667
- (id)_currentAccessibilityLabel;	// IMP=0x0010000000831546
- (void)_drawSign;	// IMP=0x0010000000831059
- (void)_setSpeedLimit:(unsigned long long)arg1 units:(unsigned long long)arg2 shieldType:(long long)arg3 useNightMode:(_Bool)arg4;	// IMP=0x0010000000830e97
- (_Bool)isVisible;	// IMP=0x0010000000830e59
- (void)setSpeedLimit:(unsigned long long)arg1 units:(unsigned long long)arg2 shieldType:(long long)arg3;	// IMP=0x0010000000830e3b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000830d7e
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000830d66
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000008309cf

@end

