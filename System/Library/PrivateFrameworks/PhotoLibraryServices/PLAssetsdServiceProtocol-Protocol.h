//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAssetsdDirectServiceProtocol-Protocol.h>
#import <PhotoLibraryServices/PLAssetsdServiceCreating-Protocol.h>

@class NSData, NSDictionary, NSURL, PLDaemonJob;

@protocol PLAssetsdServiceProtocol <PLAssetsdServiceCreating, PLAssetsdDirectServiceProtocol>
- (void)bindToPhotoLibraryURL:(NSURL *)arg1 sandboxExtension:(NSData *)arg2 clientOptions:(NSDictionary *)arg3 withReply:(void (^)(NSError *))arg4;
- (void)bindToPhotoLibraryURL:(NSURL *)arg1 sandboxExtension:(NSData *)arg2 withReply:(void (^)(NSError *))arg3;
- (void)runDaemonJob:(PLDaemonJob *)arg1 isSerial:(_Bool)arg2 withReply:(void (^)(NSError *, PLDaemonJobReply *))arg3;
- (void)runDaemonJob:(PLDaemonJob *)arg1 isSerial:(_Bool)arg2;
@end

