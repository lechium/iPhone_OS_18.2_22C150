//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UICellHighlightingSupport : NSObject
{
    struct __CFDictionary *_unhighlightedStates;	// 8 = 0x8
    id _cell;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000696053
- (void)highlightView:(id)arg1;	// IMP=0x0000000000695dbd
- (void)applyState:(unsigned long long)arg1 toView:(id)arg2;	// IMP=0x0000000000695a92
- (void)cacheState:(unsigned long long)arg1 forView:(id)arg2;	// IMP=0x00000000006956bb
- (void)dealloc;	// IMP=0x000000000069567c
- (id)initWithCell:(id)arg1;	// IMP=0x000000000069559d

@end
