//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (WFExtension)
+ (id)WF_stringFromArray:(id)arg1;	// IMP=0x0050000000001c05
+ (id)WF_ignorableCharacterSet;	// IMP=0x0050000000001acf
- (id)WF_stringWithMostSignificatDomainPart;	// IMP=0x00100000000022f1
- (_Bool)_isIPv4DomainAddress;	// IMP=0x0010000000002257
- (id)WF_stringByProperlyFixingPercentEscapesUsingEncoding:(unsigned long long)arg1;	// IMP=0x0010000000002218
- (long long)WF_numericCompare:(id)arg1;	// IMP=0x00100000000021d0
- (id)WF_fuzzyStringWithWordLength:(int)arg1;	// IMP=0x0010000000002128
- (id)WF_stringByConvertingSpacesInHTMLSpaces;	// IMP=0x0010000000002108
- (id)WF_stringByReplacingString:(id)arg1 withString:(id)arg2;	// IMP=0x001000000000203b
- (id)WF_stringByEscapingPrintfArguments;	// IMP=0x001000000000201b
- (id)WF_stringByRemovingWord:(id)arg1;	// IMP=0x0010000000001f11
- (struct _NSRange)WF_rangeOfWord:(id)arg1;	// IMP=0x0010000000001d96
- (_Bool)WF_containsWord:(id)arg1;	// IMP=0x0010000000001d73
- (_Bool)WF_containsString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000001d50
- (_Bool)WF_containsString:(id)arg1;	// IMP=0x0010000000001d39
@end
