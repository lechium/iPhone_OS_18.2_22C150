//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, QLItem;

__attribute__((visibility("hidden")))
@interface QLCacheItem : NSObject
{
    NSMutableArray *_handlers;	// 8 = 0x8
    QLItem *_item;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000409f4
@property(retain, nonatomic) QLItem *item; // @synthesize item=_item;
- (void)_performHandlers;	// IMP=0x00000000000407b8
- (void)invalidate;	// IMP=0x0000000000040788
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040633

@end

