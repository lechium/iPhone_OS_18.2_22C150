//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface PRQueryNumberFormatters : NSObject
{
    NSLocale *_locale;	// 8 = 0x8
    NSNumberFormatter *_numberFormatter;	// 16 = 0x10
    NSNumberFormatter *_decimalFormatter;	// 24 = 0x18
    NSNumberFormatter *_currencyFormatter;	// 32 = 0x20
    NSNumberFormatter *_currencyDecimalFormatter;	// 40 = 0x28
}

- (void)dealloc;	// IMP=0x00000000001f39f6
- (id)initWithLocale:(id)arg1;	// IMP=0x00000000001f3891

@end
