//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewFlowLayoutInvalidationContext.h"

@class NSIndexSet, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext
{
    NSMutableIndexSet *_invalidatedSections;	// 16 = 0x10
    struct __CFDictionary *_headerWidthDict;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000fc1870
@property(readonly, nonatomic) NSIndexSet *invalidatedSections; // @synthesize invalidatedSections=_invalidatedSections;
- (double)preferredWidthForHeaderInSection:(long long)arg1;	// IMP=0x0000000000fc180c
- (void)dealloc;	// IMP=0x0000000000fc17c6

@end

