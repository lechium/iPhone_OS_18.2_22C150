//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

@interface NSOutputStream (NSOutputStream)
+ (id)outputStreamWithURL:(id)arg1 append:(_Bool)arg2;	// IMP=0x0060000000842adb
+ (id)outputStreamToFileAtPath:(id)arg1 append:(_Bool)arg2;	// IMP=0x0060000000842aa9
+ (id)outputStreamToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0060000000842a75
+ (id)outputStreamToMemory;	// IMP=0x0060000000842a53
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000008429c5
- (unsigned long long)_cfTypeID;	// IMP=0x0010000000842c5c
- (void)dealloc;	// IMP=0x0010000000842c03
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;	// IMP=0x0010000000842bb1
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0010000000842b5f
- (id)initToMemory;	// IMP=0x0010000000842b0d
- (_Bool)hasSpaceAvailable;	// IMP=0x0010000000842a25
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x00100000008429f2
- (CDStruct_87dc826d)_cfStreamError;	// IMP=0x0010000000842c9a
@end
