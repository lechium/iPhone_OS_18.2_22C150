//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject
{
    EDWorkbook *mWorkbook;	// 8 = 0x8
    NSMutableArray *mProcessors;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003a6283
- (void)applyProcessorsWithSheet:(id)arg1;	// IMP=0x000000000012cd1a
- (void)markObject:(id)arg1 processor:(Class)arg2;	// IMP=0x0000000000124f58
- (void)removeAllObjects;	// IMP=0x0000000000115815
- (void)removeProcessorClass:(Class)arg1;	// IMP=0x00000000003a61cc
- (_Bool)hasProcessors;	// IMP=0x00000000003a61af
- (void)addProcessorClass:(Class)arg1;	// IMP=0x000000000011582b
- (id)initWithWorkbook:(id)arg1;	// IMP=0x0000000000115698

@end
