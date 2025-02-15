//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "STKTextSessionData.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface STKTextInputSessionData : STKTextSessionData
{
    NSString *_defaultText;	// 8 = 0x8
    _Bool _isSecure;	// 16 = 0x10
    _Bool _isDigitsOnly;	// 17 = 0x11
    unsigned long long _minimumInputLength;	// 24 = 0x18
    unsigned long long _maximumInputLength;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000010123
@property(readonly, nonatomic) unsigned long long maximumInputLength; // @synthesize maximumInputLength=_maximumInputLength;
@property(readonly, nonatomic) unsigned long long minimumInputLength; // @synthesize minimumInputLength=_minimumInputLength;
@property(readonly, nonatomic) _Bool isDigitsOnly; // @synthesize isDigitsOnly=_isDigitsOnly;
@property(readonly, nonatomic) _Bool isSecure; // @synthesize isSecure=_isSecure;
@property(readonly, copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000000ffe0
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000000ff03
- (id)initWithText:(id)arg1 simLabel:(id)arg2;	// IMP=0x000000000000feb1

@end

