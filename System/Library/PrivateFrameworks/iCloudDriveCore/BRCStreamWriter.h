//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOutputStream;

__attribute__((visibility("hidden")))
@interface BRCStreamWriter : NSObject
{
    NSOutputStream *_outputStream;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001a6506
- (void)dealloc;	// IMP=0x00000000001a64c8
- (void)close;	// IMP=0x00000000001a6462
- (void)appendString:(id)arg1;	// IMP=0x00000000001a6387
- (id)initWithOutputStream:(id)arg1;	// IMP=0x00000000001a630b

@end
