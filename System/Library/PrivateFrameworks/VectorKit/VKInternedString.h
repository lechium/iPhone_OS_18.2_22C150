//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface VKInternedString : NSString
{
    NSString *original;	// 8 = 0x8
}

+ (id)stringWithString:(id)arg1;	// IMP=0x00600000009a6190
+ (void)initialize;	// IMP=0x00600000009a6110
- (void).cxx_destruct;	// IMP=0x00000000009a60f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009a60e0
- (unsigned long long)hash;	// IMP=0x00000000009a60c0
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x00000000009a60a0
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x00000000009a6080
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x00000000009a6060
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x00000000009a6040
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x00000000009a6020
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000009a6000
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009a5fe0
- (unsigned long long)length;	// IMP=0x00000000009a5fc0
- (void)dealloc;	// IMP=0x00000000009a5f10
- (id)initWithString:(id)arg1;	// IMP=0x00000000009a5ee0

@end

