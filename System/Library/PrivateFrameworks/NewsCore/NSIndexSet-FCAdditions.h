//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (FCAdditions)
- (void)fc_enumerateGapsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x009000000036ae66
- (id)fc_indexSetWithGapsInRange:(struct _NSRange)arg1;	// IMP=0x009000000036add6
- (_Bool)fc_isContiguous;	// IMP=0x009000000036ad69
- (struct _NSRange)fc_enclosingRange;	// IMP=0x009000000036aceb
- (unsigned long long)fc_countOfContiguousIndexesLessThanIndex:(unsigned long long)arg1;	// IMP=0x009000000036ac8d
- (unsigned long long)fc_countOfContiguousIndexesGreaterThanOrEqualToIndex:(unsigned long long)arg1;	// IMP=0x009000000036ac2d
@end
