//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface BannerItemQueue : NSObject
{
    NSMutableOrderedSet *_dequeuedOrder;	// 8 = 0x8
    NSMutableDictionary *_queueByClass;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000003e0cfa
- (id)popItem;	// IMP=0x00100000003e07ea
- (void)removeAllItems;	// IMP=0x00100000003e05f2
- (void)removeItemsOfType:(Class)arg1;	// IMP=0x00100000003e04cf
- (void)addItem:(id)arg1;	// IMP=0x00100000003e01e8
- (id)init;	// IMP=0x00100000003e0173

@end

