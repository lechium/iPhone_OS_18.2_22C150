//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPipe.h"

@class NSFileHandle;

__attribute__((visibility("hidden")))
@interface NSConcretePipe : NSPipe
{
    NSFileHandle *_readHandle;	// 8 = 0x8
    NSFileHandle *_writeHandle;	// 16 = 0x10
}

- (void)_closeOnDealloc;	// IMP=0x000000000076b4a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000076b49b
- (void)dealloc;	// IMP=0x000000000076b420
- (id)init;	// IMP=0x000000000076b2f3
- (id)fileHandleForWriting;	// IMP=0x000000000076b2d5
- (id)fileHandleForReading;	// IMP=0x000000000076b2b7

@end
