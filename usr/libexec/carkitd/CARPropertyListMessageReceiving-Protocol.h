//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CARPropertyListMessenger, NSDictionary;

@protocol CARPropertyListMessageReceiving <NSObject>
- (void)propertyListMessenger:(CARPropertyListMessenger *)arg1 didReceiveMessageWithIdentifier:(unsigned short)arg2 contents:(NSDictionary *)arg3;
@end

