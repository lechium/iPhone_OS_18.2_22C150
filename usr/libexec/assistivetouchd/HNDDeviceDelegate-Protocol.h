//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class HNDDevice, HNDEvent;

@protocol HNDDeviceDelegate <NSObject>
- (void)device:(HNDDevice *)arg1 didPostEvent:(HNDEvent *)arg2;
- (void)device:(HNDDevice *)arg1 didUnload:(_Bool)arg2;
@end
