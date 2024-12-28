//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationMessageHandler
{
    id <HMDMediaDestinationMessageHandlerDataSource> _dataSource;	// 8 = 0x8
    id <HMDMediaDestinationMessageHandlerDelegate> _delegate;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x006000000080e198
- (void).cxx_destruct;	// IMP=0x000000000080dedb
@property __weak id <HMDMediaDestinationMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)handleMediaDestinationUpdateSupportedOptionsRequestMessage:(id)arg1;	// IMP=0x000000000080da40
- (void)handleMediaDestinationUpdateAudioGroupIdentifierRequestMessage:(id)arg1;	// IMP=0x000000000080d5e1
- (unsigned long long)supportedOptionsInMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000080d326
- (id)audioGroupIdentifierInMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000080cfa6
- (void)handleUpdatedDestination:(id)arg1;	// IMP=0x000000000080ce64
- (void)sendRequestToUpdateSupportOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000080caf5
- (void)sendRequestToUpdateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000080c793
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 notifications:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6;	// IMP=0x000000000080c55e
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;	// IMP=0x000000000080c539

@end
