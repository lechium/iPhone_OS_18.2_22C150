//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MOVStreamIO/NSObject-Protocol.h>

@class NSDictionary;

@protocol MOVStreamPostProcessor <NSObject>
@property(nonatomic) unsigned int originalPixelFormat;
@property(retain) id exactBytesPerRow;
@property(readonly) unsigned int processedPixelFormat;
@property _Bool removePadding;
@property int bufferCacheMode;
- (struct __CVBuffer *)processedPixelBufferFrom:(struct __CVBuffer *)arg1 metadata:(NSDictionary *)arg2 error:(id *)arg3;
- (id)initWithOriginalPixelFormat:(unsigned int)arg1 bufferCacheMode:(int)arg2;
- (id)initWithOriginalPixelFormat:(unsigned int)arg1;
@end

