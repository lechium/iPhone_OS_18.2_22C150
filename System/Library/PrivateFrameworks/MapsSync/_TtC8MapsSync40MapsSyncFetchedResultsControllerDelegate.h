//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8MapsSync40MapsSyncFetchedResultsControllerDelegate : NSObject
{
    MISSING_TYPE *_baseQuery;	// 8 = 0x8
    MISSING_TYPE *_delegate;	// 16 = 0x10
    MISSING_TYPE *_contentPredicate;	// 24 = 0x18
    MISSING_TYPE *_otherWatchedContentPredicate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a76b0
- (id)init;	// IMP=0x00000000000a7660
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x00000000000a74d0
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x00000000000a7420
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000000000a7400
- (void)remoteChangeWithNotification:(id)arg1;	// IMP=0x00000000000a73b0
- (void)contextDidChangeWithNotification:(id)arg1;	// IMP=0x00000000000a7360

@end

