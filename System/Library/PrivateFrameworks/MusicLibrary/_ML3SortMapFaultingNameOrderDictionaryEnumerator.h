//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class ML3DatabaseConnection;

__attribute__((visibility("hidden")))
@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator
{
    NSEnumerator *_dirtyInsertsEnumerator;	// 8 = 0x8
    ML3DatabaseConnection *_connection;	// 16 = 0x10
    unsigned long long _offset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c3e4f
- (id)nextObject;	// IMP=0x00000000000c3c4f
- (id)initWithDirtyInsertsEnumerator:(id)arg1 connection:(id)arg2;	// IMP=0x00000000000c3bad

@end
