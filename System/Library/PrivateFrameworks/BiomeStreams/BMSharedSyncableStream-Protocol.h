//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BMAccount, BMBookmarkablePublisher, BMDevice, BMPublisherOptions, BMSharedPublishers, NSArray, NSString;

@protocol BMSharedSyncableStream
- (NSArray *)remoteDevicesForAccount:(BMAccount *)arg1 error:(id *)arg2;
- (NSArray *)sharedDeviceAccountsWithError:(id *)arg1;
- (BMBookmarkablePublisher *)publisherForAccount:(BMAccount *)arg1 device:(BMDevice *)arg2 withUseCase:(NSString *)arg3 options:(BMPublisherOptions *)arg4;
- (BMBookmarkablePublisher *)publisherForAccount:(BMAccount *)arg1 device:(BMDevice *)arg2 withUseCase:(NSString *)arg3;
- (BMSharedPublishers *)publishersForAccounts:(NSArray *)arg1 deviceTypes:(unsigned long long)arg2 includeLocal:(_Bool)arg3 options:(BMPublisherOptions *)arg4 useCase:(NSString *)arg5 pipeline:(id <BPSPublisher> (^)(BMBookmarkablePublisher *))arg6;
@end
