//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TSUAdditions)
- (unsigned long long)tsu_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x009000000027bf57
- (void)tsu_trimObjectsFromIndex:(unsigned long long)arg1;	// IMP=0x009000000027bf19
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;	// IMP=0x009000000027bd4d
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;	// IMP=0x009000000027bd34
- (void)tsu_addNonNilObject:(id)arg1;	// IMP=0x009000000027bd1b
- (void)tsu_addObjects:(id)arg1;	// IMP=0x009000000027bc2b
- (id)tsu_pop;	// IMP=0x009000000027bbe3
- (void)tsu_push:(id)arg1;	// IMP=0x009000000027bbd1
- (id)tsu_dequeue;	// IMP=0x009000000027bbbf
- (void)tsu_enqueue:(id)arg1;	// IMP=0x009000000027bbab
@end

