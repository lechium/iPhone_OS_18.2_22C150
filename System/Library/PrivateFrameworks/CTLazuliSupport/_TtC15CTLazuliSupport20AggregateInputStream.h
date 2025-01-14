//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSInputStream.h>

@class MISSING_TYPE, NSError;
@protocol NSStreamDelegate;

__attribute__((visibility("hidden")))
@interface _TtC15CTLazuliSupport20AggregateInputStream : NSInputStream
{
    MISSING_TYPE *streams;	// 8 = 0x8
    MISSING_TYPE *status;	// 16 = 0x10
    MISSING_TYPE *streamIterator;	// 24 = 0x18
    MISSING_TYPE *currentStream;	// 40 = 0x28
    MISSING_TYPE *underlyingStreamError;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000029880
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000297f0
- (id)initWithData:(id)arg1;	// IMP=0x00000000000297a0
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x0000000000029790
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x0000000000029780
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000296f0
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000000296e0
@property(nonatomic, retain) id <NSStreamDelegate> delegate;
- (_Bool)getBuffer:(char **)arg1 length:(long long *)arg2;	// IMP=0x00000000000296b0
@property(nonatomic, readonly) NSError *streamError;
- (void)close;	// IMP=0x0000000000029630
- (void)open;	// IMP=0x0000000000029500
@property(nonatomic, readonly) unsigned long long streamStatus;
@property(nonatomic, readonly) _Bool hasBytesAvailable;
- (long long)read:(char *)arg1 maxLength:(long long)arg2;	// IMP=0x0000000000029290

@end

