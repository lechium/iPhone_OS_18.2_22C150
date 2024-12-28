//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol IMDaemonListenerFileTransfersProtocol <NSObject>
- (void)fileTransferFinishedRemoteIntentDownload:(NSString *)arg1;
- (void)fileTransfer:(NSString *)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)fileTransfers:(NSArray *)arg1 createdWithLocalPaths:(NSArray *)arg2;
- (void)fileTransfer:(NSString *)arg1 updatedWithProperties:(NSDictionary *)arg2;
- (void)fileTransfer:(NSString *)arg1 createdWithProperties:(NSDictionary *)arg2;
@end
