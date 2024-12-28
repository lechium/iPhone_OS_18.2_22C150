//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TSUAdditions)
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;	// IMP=0x006000000002f9e4
- (void)tsu_removeObjectsIdenticalToObjectsInSet:(id)arg1;	// IMP=0x006000000002f8ce
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;	// IMP=0x006000000002f8b5
- (void)tsu_addNonNilObject:(id)arg1;	// IMP=0x006000000002f89c
- (void)tsu_addObjects:(id)arg1;	// IMP=0x006000000002f7ac
- (id)pop_tsu;	// IMP=0x006000000002f764
- (void)push_tsu:(id)arg1;	// IMP=0x006000000002f752
- (id)tsu_dequeue;	// IMP=0x006000000002f740
- (void)tsu_enqueue:(id)arg1;	// IMP=0x006000000002f72c
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 withObject:(id)arg2 onObjectsFromArray:(id)arg3;	// IMP=0x006000000002f593
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 onObjectsFromArray:(id)arg2;	// IMP=0x006000000002f408
@end
