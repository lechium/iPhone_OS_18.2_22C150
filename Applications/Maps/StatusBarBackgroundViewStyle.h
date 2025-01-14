//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface StatusBarBackgroundViewStyle : NSObject
{
    _Bool _disableBlur;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    UIColor *_color;	// 24 = 0x18
    long long _blurStyle;	// 32 = 0x20
    NSString *_groupName;	// 40 = 0x28
    double _blurRadius;	// 48 = 0x30
    CDUnknownBlockType _defaultColorProvider;	// 56 = 0x38
}

+ (id)defaultBlurredStyleWithDefaultColorProvider:(CDUnknownBlockType)arg1;	// IMP=0x004000000059a3c3
- (void).cxx_destruct;	// IMP=0x002000000059ab06
@property(readonly, nonatomic) _Bool disableBlur; // @synthesize disableBlur=_disableBlur;
@property(readonly, copy, nonatomic) CDUnknownBlockType defaultColorProvider; // @synthesize defaultColorProvider=_defaultColorProvider;
@property(readonly, nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x001000000059aa00
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000059a790
- (id)description;	// IMP=0x001000000059a6ba
- (id)initWithVariableBlurRadius:(double)arg1 defaultColorProvider:(CDUnknownBlockType)arg2 disableBlur:(_Bool)arg3;	// IMP=0x000000000059a62d
- (id)initWithGaussianBlurRadius:(double)arg1 defaultColorProvider:(CDUnknownBlockType)arg2 disableBlur:(_Bool)arg3;	// IMP=0x001000000059a5a0
- (id)initWithBlurStyle:(long long)arg1 groupName:(id)arg2 defaultColorProvider:(CDUnknownBlockType)arg3 disableBlur:(_Bool)arg4;	// IMP=0x001000000059a4e3
- (id)initWithColor:(id)arg1;	// IMP=0x001000000059a470

@end

