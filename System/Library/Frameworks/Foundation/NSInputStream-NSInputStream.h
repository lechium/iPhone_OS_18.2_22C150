//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInputStream.h>

@interface NSInputStream (NSInputStream)
+ (id)inputStreamWithURL:(id)arg1;	// IMP=0x0050000000842800
+ (id)inputStreamWithFileAtPath:(id)arg1;	// IMP=0x00500000008427d1
+ (id)inputStreamWithData:(id)arg1;	// IMP=0x00500000008427a2
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0050000000842775
- (unsigned long long)_cfTypeID;	// IMP=0x00100000008429bb
- (_Bool)hasBytesAvailable;	// IMP=0x001000000084298d
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;	// IMP=0x001000000084295f
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x001000000084292c
- (void)dealloc;	// IMP=0x00100000008428d3
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000842881
- (id)initWithData:(id)arg1;	// IMP=0x001000000084282f
- (CDStruct_87dc826d)_cfStreamError;	// IMP=0x0010000000842c66
@end
