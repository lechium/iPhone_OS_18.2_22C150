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

- (void).cxx_destruct;	// IMP=0x00000000001b9d1e
- (void)dealloc;	// IMP=0x00000000001b9ce0
- (void)close;	// IMP=0x00000000001b9c7a
- (void)appendString:(id)arg1;	// IMP=0x00000000001b9b9f
- (id)initWithOutputStream:(id)arg1;	// IMP=0x00000000001b9b23

@end

