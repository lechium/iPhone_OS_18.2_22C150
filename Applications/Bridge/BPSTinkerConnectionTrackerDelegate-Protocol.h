//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NRDevice;

@protocol BPSTinkerConnectionTrackerDelegate <NSObject>
- (void)didUpdateAsDisconnectedDevice:(NRDevice *)arg1;
- (void)didBTConnectDevice:(NRDevice *)arg1;
- (void)didIDSConnectDevice:(NRDevice *)arg1;
@end
