//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DYVMBuffer, NSString;

__attribute__((visibility("hidden")))
@interface DYVMBufferSubRegion : NSObject
{
    DYVMBuffer *_parent;	// 8 = 0x8
    struct _NSRange _range;	// 16 = 0x10
}

- (id)DYGPUToolsData;	// IMP=0x000000000002d4fb
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x000000000002d48c
- (const void *)bytes;	// IMP=0x000000000002d45e
- (unsigned long long)length;	// IMP=0x000000000002d454
- (void)dealloc;	// IMP=0x000000000002d419
- (id)initWithDYVMBuffer:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000002d3b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
