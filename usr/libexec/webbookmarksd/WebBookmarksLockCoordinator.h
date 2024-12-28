//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface WebBookmarksLockCoordinator : NSObject
{
    NSMutableArray *_blocks;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000250a
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)accessBookmarkForWritingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000023c4
- (void)_tryLock;	// IMP=0x0010000000002136
- (id)init;	// IMP=0x001000000000208b

@end
