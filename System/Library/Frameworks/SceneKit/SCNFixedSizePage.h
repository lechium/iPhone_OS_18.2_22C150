//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNFixedSizePage : NSObject
{
    id <MTLBuffer> _buffer;	// 8 = 0x8
    unsigned long long _elementSize;	// 16 = 0x10
    NSMutableIndexSet *_freeIndices;	// 24 = 0x18
}

@property(readonly, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
- (id)newSubBufferForAllocator:(id)arg1;	// IMP=0x00000000000f28d7
- (void)deallocateElementAtOffset:(unsigned long long)arg1;	// IMP=0x00000000000f2877
- (unsigned long long)_allocateElement;	// IMP=0x00000000000f27a9
- (_Bool)hasFreeElementsLeft;	// IMP=0x00000000000f278c
- (_Bool)isFull;	// IMP=0x00000000000f276f
- (void)dealloc;	// IMP=0x00000000000f2725
- (id)initWithBuffer:(id)arg1 elementSize:(unsigned long long)arg2;	// IMP=0x00000000000f2689

@end

