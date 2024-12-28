//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer, SFSystemAlert, WebBookmarkCollection;
@protocol OS_xpc_object;

@interface WebBookmarksServerReadingListHandler : NSObject
{
    WebBookmarkCollection *_collection;	// 8 = 0x8
    NSObject<OS_xpc_object> *_readingListQueue;	// 16 = 0x10
    NSTimer *_readingListQueueTimer;	// 24 = 0x18
    unsigned long long _readingListQueueRetryCount;	// 32 = 0x20
    NSObject<OS_xpc_object> *_restoreReadingListQueueActivity;	// 40 = 0x28
    _Bool _didRestoreReadingListQueue;	// 48 = 0x30
    SFSystemAlert *_alertToAddReadingListItem;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000001667d
- (void)dealloc;	// IMP=0x0010000000016626
- (void)handleAddToReadingListWithMessage:(id)arg1 forConnection:(id)arg2;	// IMP=0x0010000000015f29
- (void)_commitReadingListQueue;	// IMP=0x0010000000015e65
- (void)_clearReadingListQueueTimer;	// IMP=0x0010000000015e0d
- (void)_finishRestoreReadingListQueueActivityIfNeeded;	// IMP=0x0010000000015d73
- (void)_readingListQueueTimerDidFire:(id)arg1;	// IMP=0x0010000000015d02
- (void)_queueReadingListItems:(id)arg1;	// IMP=0x0010000000015ba1
- (void)_restoreReadingListQueueIfNeeded;	// IMP=0x0010000000015a8f
- (id)_readingListQueueBackupPath;	// IMP=0x001000000001597f
- (void);	// IMP=0x0010000000015736
- (void)_addReadingListItemWithAddress:(id)arg1 title:(id)arg2 previewText:(id)arg3 clientBundle:(id)arg4 bookmarksCollection:(id)arg5;	// IMP=0x00100000000151b8
- (void)_scheduleRestoreReadingListQueueActivity;	// IMP=0x0010000000014d7f
- (id)_collection;	// IMP=0x0010000000014c9d
- (id)init;	// IMP=0x0010000000014c28

@end
