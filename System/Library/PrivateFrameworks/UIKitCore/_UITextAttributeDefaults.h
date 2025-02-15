//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSParagraphStyle, NSShadow, NSString, UIColor, UIFont, _UIMutableTextAttributeDictionary, _UITextAttributeDictionary;

__attribute__((visibility("hidden")))
@interface _UITextAttributeDefaults : NSObject
{
    _UIMutableTextAttributeDictionary *_attributes;	// 8 = 0x8
}

+ (id)_unspecifiedDefaults;	// IMP=0x0010000000571ad3
+ (id)_defaultsForUserInterfaceIdiom:(long long)arg1;	// IMP=0x0010000000571a9d
+ (void)_getFontSizesForUserInterfaceIdiom:(long long)arg1 labelFontSize:(double *)arg2 buttonFontSize:(double *)arg3 systemFontSize:(double *)arg4 smallSystemFontSize:(double *)arg5;	// IMP=0x001000000057216c
- (void).cxx_destruct;	// IMP=0x000000000057215c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000572059
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000571f3d
@property(readonly, copy, nonatomic) _UITextAttributeDictionary *_attributes;
@property(retain, nonatomic, setter=_setShadow:) NSShadow *_shadow;
@property(retain, nonatomic, setter=_setParagraphStyle:) NSParagraphStyle *_paragraphStyle;
@property(retain, nonatomic, setter=_setFont:) UIFont *_font;
@property(retain, nonatomic, setter=_setTextColor:) UIColor *_textColor;
- (id)_initWithFallback:(id)arg1;	// IMP=0x0000000000571b95
- (id)_init;	// IMP=0x0000000000571b3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

