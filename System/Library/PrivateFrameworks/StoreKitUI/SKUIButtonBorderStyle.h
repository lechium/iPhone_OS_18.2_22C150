//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKColor, NSString;

__attribute__((visibility("hidden")))
@interface SKUIButtonBorderStyle : NSObject
{
    IKColor *_borderColor;	// 8 = 0x8
    double _borderWidth;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
    struct IKCornerRadii _cornerRadii;	// 56 = 0x38
    IKColor *_fillColor;	// 88 = 0x58
    NSString *_namedCornerStyle;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000f7d75
@property(copy, nonatomic) NSString *namedCornerStyle; // @synthesize namedCornerStyle=_namedCornerStyle;
@property(copy, nonatomic) IKColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) struct IKCornerRadii cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) IKColor *borderColor; // @synthesize borderColor=_borderColor;
- (_Bool)_usesBackgroundWithAlpha:(id)arg1;	// IMP=0x00000000000f7c55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f7b74
- (id)bezierPathWithBounds:(struct CGRect)arg1;	// IMP=0x00000000000f771b
- (id)initWithElementStyle:(id)arg1;	// IMP=0x00000000000f7311

@end
