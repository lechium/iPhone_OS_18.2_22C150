//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIMenuElement;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDMenuElement : NSObject
{
    UIMenuElement *_uiMenuElement;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000015cd258
+ (id)elementWithUIMenuElement:(id)arg1;	// IMP=0x00100000015ccfaf
- (void).cxx_destruct;	// IMP=0x00000000015cd372
@property(readonly, nonatomic) UIMenuElement *uiMenuElement; // @synthesize uiMenuElement=_uiMenuElement;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000015cd2d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000015cd260
- (unsigned long long)hash;	// IMP=0x00000000015cd242
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000015cd16a
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 shortcutVisit:(CDUnknownBlockType)arg2;	// IMP=0x00000000015cd164
- (id)description;	// IMP=0x00000000015cd08a
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;

@end

