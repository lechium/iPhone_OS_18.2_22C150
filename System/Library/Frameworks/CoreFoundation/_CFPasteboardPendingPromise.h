//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CFPasteboardEntry;

__attribute__((visibility("hidden")))
@interface _CFPasteboardPendingPromise : NSObject
{
    _CFPasteboardEntry *_entry;	// 8 = 0x8
    struct __CFPasteboard *_pboard;	// 16 = 0x10
}

@property(readonly) struct __CFPasteboard *pasteboard; // @synthesize pasteboard=_pboard;
- (void)dealloc;	// IMP=0x0000000000076790
- (id)initWithEntry:(id)arg1 pasteboard:(struct __CFPasteboard *)arg2;	// IMP=0x000000000007670a

@end
