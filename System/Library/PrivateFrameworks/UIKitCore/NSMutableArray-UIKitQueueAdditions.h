//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (UIKitQueueAdditions)
- (id)_ui_peek;	// IMP=0x0060000000822b16
- (id)_ui_dequeue;	// IMP=0x0060000000822ab0
- (void)_ui_enqueue:(id)arg1;	// IMP=0x0060000000822a9e
- (void)removeViewsFromSuperview;	// IMP=0x0060000000944494
- (void)_kb_reverse;	// IMP=0x0060000000db7252
- (void)_uikbrtRemove:(id)arg1;	// IMP=0x00600000010f33d9
- (void)_uikbrtInsert:(id)arg1 beforeItemPassingTest:(CDUnknownBlockType)arg2;	// IMP=0x00600000010f2fa6
- (void)_uikbrtInsert:(id)arg1 after:(id)arg2;	// IMP=0x00600000010f2b59
- (void)_uikbrtInsert:(id)arg1 before:(id)arg2;	// IMP=0x00600000010f2725
- (void)_set_syncQueue:(id)arg1;	// IMP=0x00600000010f270f
- (id)_syncQueue;	// IMP=0x00600000010f26b5
- (void)_set_listContainsOrderedItems:(_Bool)arg1;	// IMP=0x00600000010f2681
- (_Bool)_listContainsOrderedItems;	// IMP=0x00600000010f2635
@end

