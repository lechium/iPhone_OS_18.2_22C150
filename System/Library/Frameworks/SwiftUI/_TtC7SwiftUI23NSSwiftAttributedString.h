//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI23NSSwiftAttributedString : NSAttributedString
{
    MISSING_TYPE *_storage;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000002203d0
- (id)initWithAttributedString:(id)arg1;	// IMP=0x0000000000220390
- (id)initWithString:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000000220360
- (id)initWithString:(id)arg1;	// IMP=0x0000000000220330
- (id)initWithMarkdownString:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000220310
- (id)initWithMarkdown:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002202f0
- (id)initWithContentsOfMarkdownFileAtURL:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002202d0
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000002202b0
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000220280
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000220250
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;	// IMP=0x0000000000220220
- (id)init;	// IMP=0x00000000002201f0
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000220110
- (void)enumerateAttributesInRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000220050
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x000000000021ffe0
- (id)attribute:(id)arg1 atIndex:(long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x000000000021feb0
- (id)attribute:(id)arg1 atIndex:(long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x000000000021fd90
- (id)attributesAtIndex:(long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x000000000021fc90
- (id)attributesAtIndex:(long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x000000000021fbd0
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x000000000021fb80
@property(nonatomic, readonly) NSString *string;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000021fab0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021fa60

@end

