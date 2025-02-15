//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSServiceConnectionEndpoint, NCNotificationAction, NSDictionary, NSString;

@protocol NCNotificationActionRunner <NSObject>
@property(nonatomic) _Bool shouldForwardAction;
- (void)executeAction:(NCNotificationAction *)arg1 fromOrigin:(NSString *)arg2 endpoint:(BSServiceConnectionEndpoint *)arg3 withParameters:(NSDictionary *)arg4 completion:(void (^)(_Bool))arg5;
@end

