//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI2/FCSubscriptionObserving-Protocol.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI215ShortcutService : NSObject <FCSubscriptionObserving>
{
    MISSING_TYPE *observers;	// 8 = 0x8
    MISSING_TYPE *featureAvailability;	// 16 = 0x10
    MISSING_TYPE *shortcutList;	// 24 = 0x18
    MISSING_TYPE *subscriptionController;	// 32 = 0x20
    MISSING_TYPE *configurationManager;	// 40 = 0x28
    MISSING_TYPE *unsafeOrderedShortcuts;	// 48 = 0x30
    MISSING_TYPE *tagService;	// 56 = 0x38
    MISSING_TYPE *lock;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002b15f0
- (id)init;	// IMP=0x00000000002b1e30
- (void)dealloc;	// IMP=0x00000000002b1570
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6;	// IMP=0x00000000002b2520
- (void)shortcutList:(id)arg1 didAddShortcuts:(id)arg2 changedShortcuts:(id)arg3 removedShortcuts:(id)arg4;	// IMP=0x00000000002b2ac0

@end
