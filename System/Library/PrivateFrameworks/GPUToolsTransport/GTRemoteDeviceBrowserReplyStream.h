//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTRemoteDeviceBrowserObserver;

__attribute__((visibility("hidden")))
@interface GTRemoteDeviceBrowserReplyStream
{
    id <GTRemoteDeviceBrowserObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002ffd7
- (void)notifyDeviceListChanged_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000002ff61
- (id)initWithObserver:(id)arg1;	// IMP=0x000000000002febd

@end

