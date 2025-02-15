//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingPickerLayoutAttributes : NSObject
{
    double _topToAvatarPadding;	// 8 = 0x8
    UIFont *_headerFont;	// 16 = 0x10
    double _avatarViewToNamePadding;	// 24 = 0x18
    UIColor *_backgroundColor;	// 32 = 0x20
    struct CGSize _avatarViewSize;	// 40 = 0x28
}

+ (id)layoutAttributesForSettings;	// IMP=0x00600000001a4425
+ (id)layoutAttributesForBuddy;	// IMP=0x00600000001a4388
+ (id)settingsHeaderFont;	// IMP=0x00600000001a4262
+ (id)buddyHeaderFont;	// IMP=0x00600000001a4112
- (void).cxx_destruct;	// IMP=0x00000000001a40ea
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double avatarViewToNamePadding; // @synthesize avatarViewToNamePadding=_avatarViewToNamePadding;
@property(readonly, nonatomic) struct CGSize avatarViewSize; // @synthesize avatarViewSize=_avatarViewSize;
@property(readonly, nonatomic) UIFont *headerFont; // @synthesize headerFont=_headerFont;
@property(readonly, nonatomic) double topToAvatarPadding; // @synthesize topToAvatarPadding=_topToAvatarPadding;
- (id)initWithTopToAvatarPadding:(double)arg1 headerFont:(id)arg2 avatarViewSize:(struct CGSize)arg3 avatarViewToNamePadding:(double)arg4 backgroundColor:(id)arg5;	// IMP=0x00000000001a3fc3

@end

