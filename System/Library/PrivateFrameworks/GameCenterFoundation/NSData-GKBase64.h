//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (GKBase64)
+ (id)_gkImageCachePathForURL:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3;	// IMP=0x00800000000d61c2
+ (void)_gkLoadRemoteImageDataForUrl:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 imageQueue:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00800000000d55bc
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00800000000d5476
+ (void)_gkRequestClientsRemoteImageDataForURL:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00800000000d4c80
+ (_Bool)imageDebugEnabled;	// IMP=0x00800000000d4c3a
- (id)_gkZippedDictionaryValue;	// IMP=0x0010000000025f02
- (id)_gkAsHexString;	// IMP=0x00100000000d62a6
@end
