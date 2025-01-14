//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSKeychainStore : NSObject
{
}

- (_Bool)_fixUpdateConflictForItemWithAttributes:(id)arg1 andAttributesToUpdate:(id)arg2;	// IMP=0x000000000007e580
- (_Bool)deleteItemsMatchingQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007e45e
- (_Bool)updateAttributes:(id)arg1 ofItemsMatchingQuery:(id)arg2 attemptCount:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000007e2ea
- (_Bool)updateAttributes:(id)arg1 ofItemsMatchingQuery:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007e2cf
- (id)findItemsMatchingQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007e207
- (id)addItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007e02a

@end

