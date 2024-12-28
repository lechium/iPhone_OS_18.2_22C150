//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface OISFUMemoryOutputStream : NSObject
{
    NSMutableData *mData;	// 8 = 0x8
}

- (id)closeLocalStream;	// IMP=0x0000000000290490
- (void)close;	// IMP=0x000000000029048a
- (id)inputStream;	// IMP=0x0000000000290482
- (_Bool)canCreateInputStream;	// IMP=0x000000000029047a
- (long long)offset;	// IMP=0x0000000000290464
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;	// IMP=0x00000000002903cd
- (_Bool)canSeek;	// IMP=0x00000000002903c5
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000002903af
- (void)dealloc;	// IMP=0x0000000000290374
- (id)initWithData:(id)arg1;	// IMP=0x0000000000290340

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
