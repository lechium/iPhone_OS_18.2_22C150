//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBHIDValueModifyingButtonSetArbiter;

@protocol SBHIDValueModifyingButtonSetArbiterDelegate <NSObject>
- (void)buttonSetArbiter:(SBHIDValueModifyingButtonSetArbiter *)arg1 performActionForButtonPage:(unsigned short)arg2 usage:(unsigned short)arg3;

@optional
- (void)buttonSetArbiterDidReset:(SBHIDValueModifyingButtonSetArbiter *)arg1;
@end
