//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PasscodeViewStyle : NSObject
{
    long long _rawValue;	// 8 = 0x8
    long long _backgroundStyle;	// 16 = 0x10
}

+ (id)lightStyleWithBackgroundStyle:(long long)arg1;	// IMP=0x004000000002585d
+ (id)darkStyleWithBackgroundStyle:(long long)arg1;	// IMP=0x0010000000025825
+ (id)defaultStyleWithBackgroundStyle:(long long)arg1;	// IMP=0x0010000000025813
@property(readonly, nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(readonly, nonatomic) long long rawValue; // @synthesize rawValue=_rawValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000025898
- (id)initWithRawValue:(long long)arg1 backgroundStyle:(long long)arg2;	// IMP=0x00100000000257cb

@end
