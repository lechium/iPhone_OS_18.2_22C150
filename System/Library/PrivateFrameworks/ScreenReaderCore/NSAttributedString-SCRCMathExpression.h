//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (SCRCMathExpression)
+ (id)scrcSpaceString;	// IMP=0x0050000000001dad
+ (id)scrcPauseString;	// IMP=0x0050000000001d94
+ (id)scrcString;	// IMP=0x0050000000001d82
+ (id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2;	// IMP=0x0050000000001ce4
+ (id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2;	// IMP=0x0050000000001b9e
+ (id)scrcStringWithLiteralString:(id)arg1;	// IMP=0x0050000000001b8a
+ (id)scrcStringWithString:(id)arg1 treePosition:(id)arg2;	// IMP=0x0050000000001aa0
+ (id)scrcStringWithString:(id)arg1;	// IMP=0x0050000000001a8c
+ (id)scrcStringWithFormat:(id)arg1;	// IMP=0x00500000000019d9
+ (id)_scrcStringWithFormat:(id)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x0050000000001761
- (_Bool)scrcContainsPause;	// IMP=0x0010000000002102
- (_Bool)_scrcHasPauseCommaAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000002057
- (id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2;	// IMP=0x0010000000001fc1
- (id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000001e75
- (id)scrcStringByAppendingAttributedString:(id)arg1;	// IMP=0x0010000000001dc6
- (struct _NSRange)_scrcRangeOfFormatSpecifierWithIndex:(unsigned long long)arg1;	// IMP=0x00100000000016ce
- (struct _NSRange)_scrcRangeOfVanillaFormatSpecifier;	// IMP=0x0010000000001674
- (id)scrcIndexSetForAttributes:(id)arg1 limit:(long long)arg2;	// IMP=0x0010000000024d52
- (id)scrcSplitBasedOnAttribute:(id)arg1 limit:(long long)arg2;	// IMP=0x0010000000024a92
- (id)scrcSplitBasedOnMultipleAttributesWithLimit:(long long)arg1;	// IMP=0x001000000002480c
@end

