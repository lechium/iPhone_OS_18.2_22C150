//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UILabelStringContent
{
    NSString *_string;	// 16 = 0x10
    struct {
        unsigned int isWidthVariant:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000197c36d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000197c333
- (unsigned long long)hash;	// IMP=0x000000000197c2dd
- (_Bool)_isContentEqualToContent:(id)arg1;	// IMP=0x000000000197c266
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x000000000197c1e4
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x000000000197c1be
- (id)attributedString;	// IMP=0x000000000197c172
- (id)string;	// IMP=0x000000000197c15d
- (_Bool)isNil;	// IMP=0x000000000197c148
- (_Bool)isWidthVariant;	// IMP=0x000000000197c136
- (_Bool)isAttributed;	// IMP=0x000000000197c12e
- (long long)length;	// IMP=0x000000000197c111
- (id)attributedStringContent;	// IMP=0x000000000197c0b2
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange)arg3;	// IMP=0x000000000197beeb
- (id)contentWithAttributedString:(id)arg1;	// IMP=0x000000000197be73
- (id)contentWithString:(id)arg1;	// IMP=0x000000000197bd5c
- (id)initWithString:(id)arg1 defaultAttributes:(id)arg2;	// IMP=0x000000000197bc39

@end
