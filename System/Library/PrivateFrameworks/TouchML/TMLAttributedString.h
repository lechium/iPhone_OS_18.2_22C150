//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSMutableAttributedString, NSString;

@interface TMLAttributedString : NSObject
{
    NSMutableAttributedString *_attributedString;	// 8 = 0x8
}

+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2;	// IMP=0x001000000000dea3
+ (void)initializeJSContext:(id)arg1;	// IMP=0x001000000000da4f
- (void).cxx_destruct;	// IMP=0x000000000000eac8
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2;	// IMP=0x000000000000ea75
- (struct CGSize)size;	// IMP=0x000000000000ea5f
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000000ea49
- (void)appendAttributedString:(id)arg1;	// IMP=0x000000000000e996
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000000e8d1
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x000000000000e7fe
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000000e7e8
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000000e7d2
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x000000000000e7bc
- (id)enumerateAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000000e6b7
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000000da39
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000000da23
@property(readonly, nonatomic) unsigned long long length;
- (id)NSAttributedString;	// IMP=0x000000000000d9ef
@property(copy, nonatomic) NSString *string;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d92f
- (id)attributedStringWithAttachment:(id)arg1;	// IMP=0x000000000000d8c2
- (id)initWithAttributedString:(id)arg1;	// IMP=0x000000000000d865
- (id)init;	// IMP=0x000000000000d836

@end

