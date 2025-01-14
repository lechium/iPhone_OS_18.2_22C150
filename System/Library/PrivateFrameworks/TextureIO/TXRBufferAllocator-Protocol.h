//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextureIO/NSObject-Protocol.h>

@protocol TXRBuffer;

@protocol TXRBufferAllocator <NSObject>
- (id <TXRBuffer>)newBufferWithLength:(unsigned long long)arg1;

@optional
- (id <TXRBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocNotification:(void (^)(void *, unsigned long long))arg3 error:(id *)arg4;
@end

