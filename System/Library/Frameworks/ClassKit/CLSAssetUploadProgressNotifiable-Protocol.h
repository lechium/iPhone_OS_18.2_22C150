//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSClientCancelable-Protocol.h>

@class NSError, NSString;

@protocol CLSAssetUploadProgressNotifiable <CLSClientCancelable>
- (oneway void)clientRemote_uploadCompleted:(_Bool)arg1 url:(id)arg2 thumbnailURL:(id)arg3 relativePathWithinContainer:(NSString *)arg4 ubiquitousContainerName:(NSString *)arg5 brItemID:(NSString *)arg6 brOwnerName:(NSString *)arg7 brZoneName:(NSString *)arg8 brShareName:(NSString *)arg9 fractionUploaded:(double)arg10 isTemporary:(_Bool)arg11 isStaged:(_Bool)arg12 error:(NSError *)arg13;
- (oneway void)clientRemote_uploadProgressFraction:(double)arg1 error:(NSError *)arg2;
@end

