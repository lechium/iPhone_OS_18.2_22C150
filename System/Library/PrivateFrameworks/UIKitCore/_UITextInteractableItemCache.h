//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UITextInteractableItemCache : NSObject
{
    NSMutableSet *_attachmentItems;	// 8 = 0x8
    NSMutableSet *_linkItems;	// 16 = 0x10
    NSMutableSet *_tagItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000012fb101
@property(retain, nonatomic) NSMutableSet *tagItems; // @synthesize tagItems=_tagItems;
@property(retain, nonatomic) NSMutableSet *linkItems; // @synthesize linkItems=_linkItems;
@property(retain, nonatomic) NSMutableSet *attachmentItems; // @synthesize attachmentItems=_attachmentItems;
- (id)_cachedItemInSet:(id)arg1 predicate:(CDUnknownBlockType)arg2;	// IMP=0x00000000012fafcf
- (void)invalidate;	// IMP=0x00000000012faf8a
- (void)removeItem:(id)arg1;	// IMP=0x00000000012fae01
- (void)addItem:(id)arg1;	// IMP=0x00000000012fac78
- (id)itemForTag:(id)arg1 range:(id)arg2;	// IMP=0x00000000012faa27
- (id)itemForLink:(id)arg1 range:(id)arg2;	// IMP=0x00000000012fa7d6
- (id)itemForAttachment:(id)arg1 range:(id)arg2;	// IMP=0x00000000012fa585
- (id)init;	// IMP=0x00000000012fa4f9

@end
