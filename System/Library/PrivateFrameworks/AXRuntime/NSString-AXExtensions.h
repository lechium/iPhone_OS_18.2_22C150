//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (AXExtensions)
- (id)axAttributedStringWithAttributes:(id)arg1;	// IMP=0x0090000000024a60
- (struct _NSRange)_axUnit:(unsigned long long)arg1 fromPosition:(long long)arg2 inDirection:(unsigned long long)arg3;	// IMP=0x0090000000024784
- (struct _NSRange)ax_lineRangeForPosition:(long long)arg1;	// IMP=0x009000000002460e
- (struct _NSRange)ax_wordFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00900000000245f4
- (struct _NSRange)ax_sentenceFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00900000000245d7
- (struct _NSRange)ax_paragraphFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x00900000000245ba
- (struct _NSRange)ax_lineFromPosition:(long long)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x0090000000024546
- (struct _NSRange)_ax_rangeOfNextUnitWithStartPosition:(long long)arg1 direction:(unsigned long long)arg2 withCharacterSet:(id)arg3;	// IMP=0x00900000000243a7
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id *)arg1;	// IMP=0x00900000000489e9
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id *)arg1;	// IMP=0x00900000000489e0
- (id)_axReconstitutedRepresentationForDictionaryKeyReplacement;	// IMP=0x00900000000488d2
- (id)_axDictionaryKeyReplacementRepresentation;	// IMP=0x00900000000488c9
@end
