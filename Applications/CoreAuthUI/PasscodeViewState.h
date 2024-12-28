//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PasscodeViewStyle, UIView;

@interface PasscodeViewState : NSObject
{
    long long _rawValue;	// 8 = 0x8
    PasscodeViewStyle *_style;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_subtitle;	// 32 = 0x20
    UIView *_accessoryView;	// 40 = 0x28
}

+ (id)backOffStateWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x0040000000025b1d
+ (id)activeStateWithTitle:(id)arg1 subtitle:(id)arg2 accessoryView:(id)arg3;	// IMP=0x0010000000025a83
- (void).cxx_destruct;	// IMP=0x0020000000025ece
@property(readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) PasscodeViewStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) long long rawValue; // @synthesize rawValue=_rawValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000025c94
- (id)withStyle:(id)arg1;	// IMP=0x0010000000025ba7
- (id)initWithRawValue:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 accessoryView:(id)arg4 style:(id)arg5;	// IMP=0x001000000002596d

@end
