//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSString.h"

@class NSAttributedString, NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSCFLocalizedAttributedString : NSString
{
    NSAttributedString *_original;	// 8 = 0x8
    NSString *_apparentString;	// 16 = 0x10
    NSDictionary *_formatConfiguration;	// 24 = 0x18
}

+ (id)stringEncapsulatingBaseAttributedString:(id)arg1;	// IMP=0x0010000000727f51
+ (struct __CFString *)createStringRequiringInflectionWithFormat:(struct __CFString *)arg1 formatOptions:(struct __CFDictionary *)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x00100000007277b3
+ (struct __CFString *)copyStringWithMarkdown:(struct __CFString *)arg1 formatConfiguration:(struct __CFDictionary *)arg2 bundle:(struct __CFBundle *)arg3 tableURL:(struct __CFURL *)arg4;	// IMP=0x0010000000727773
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x000000000072816d
- (const unsigned short *)_fastCharacterContents;	// IMP=0x0000000000728158
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x000000000072813b
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x000000000072811e
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000728101
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x00000000007280e4
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x00000000007280c7
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000007280aa
- (unsigned long long)fastestEncoding;	// IMP=0x000000000072808d
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000728070
- (unsigned long long)length;	// IMP=0x0000000000728053
- (id)__baseAttributedString;	// IMP=0x0000000000728042
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000728025
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000072801a
- (id)formatConfiguration;	// IMP=0x0000000000728009
- (void)dealloc;	// IMP=0x0000000000727f80
- (id)_initWithAttributedString:(id)arg1;	// IMP=0x0000000000727e7b
- (id)initWithAttributedStringMarkdown:(id)arg1 formatConfiguration:(id)arg2 bundle:(struct __CFBundle *)arg3 tableURL:(id)arg4;	// IMP=0x00000000007278f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007278a4
- (Class)classForCoder;	// IMP=0x0000000000727893
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000072785f

@end
