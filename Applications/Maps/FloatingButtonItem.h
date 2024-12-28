//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIButton;

@interface FloatingButtonItem : NSObject
{
    _Bool _isSeparator;	// 8 = 0x8
    UIButton *_button;	// 16 = 0x10
    long long _option;	// 24 = 0x18
}

+ (id)separatorItem;	// IMP=0x002000000032ee6e
- (void).cxx_destruct;	// IMP=0x002000000032ef11
@property(readonly, nonatomic) _Bool isSeparator; // @synthesize isSeparator=_isSeparator;
@property(readonly, nonatomic) long long option; // @synthesize option=_option;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (id)initWithButton:(id)arg1 option:(long long)arg2;	// IMP=0x001000000032edf7

@end
